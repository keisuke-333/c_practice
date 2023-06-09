#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <unistd.h>

int main()
{
  struct sockaddr_in server, client;
  char buf[256], sndbuf[256];

  memset(sndbuf, 0, sizeof(sndbuf));
  snprintf(sndbuf, sizeof(sndbuf),
           "HTTP/1.1 200 OK\r\n"
           "Date: Tue, 20 May 2023 9:00:00 GMT\r\n"
           "Server: Apache/2.2\r\n"
           "Content-Length: 13\r\n"
           "\r\n"
           "HELLO CLIENT\r\n");

  int sock = socket(AF_INET, SOCK_STREAM, 0);
  server.sin_addr.s_addr = INADDR_ANY;
  server.sin_port = htons(9999);
  server.sin_family = AF_INET;

  bind(sock, (struct sockaddr *)&server, sizeof(server));
  listen(sock, 1);

  for (;;)
  {
    socklen_t len = sizeof(client);
    int sock2 = accept(sock, (struct sockaddr *)&client, &len);

    recv(sock2, buf, sizeof(buf), 0);
    send(sock2, sndbuf, sizeof(sndbuf), 0);
    close(sock2);
  }
  close(sock);

  return 0;
}
