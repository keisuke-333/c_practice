#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <unistd.h>

int main()
{
  float radius = 3.5;
  float pi = 3.14;
  float area = pi * radius * radius;
  printf("Area of the circle is: %f\n", area);

  FILE *fp;
  fp = fopen("file.txt", "w");
  fprintf(fp, "Hello process B\n");
  fclose(fp);

  char str[256];
  fp = fopen("file.txt", "r");
  fgets(str, 256, fp);
  printf("%s\n", str);
  fclose(fp);

  int a = 10;
  fp = fopen("file2.txt", "wb");
  fwrite(&a, sizeof(a), 1, fp);
  fclose(fp);

  int b;
  fp = fopen("file2.txt", "rb");
  fread(&b, sizeof(b), 1, fp);
  printf("%d\n", b);
  fclose(fp);

  struct sockaddr_in server;
  char buf[256];

  int sock = socket(AF_INET, SOCK_STREAM, 0);
  server.sin_addr.s_addr = inet_addr("127.0.0.1");
  server.sin_port = htons(9999);
  server.sin_family = AF_INET;

  connect(sock, (struct sockaddr *)&server, sizeof(server));
  strcpy(buf, "hello");
  send(sock, buf, sizeof(buf), 0);

  close(sock);

  return 0;
}