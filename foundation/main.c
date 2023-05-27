#include <stdio.h>

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

  return 0;
}