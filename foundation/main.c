#include <stdio.h>

int main()
{
  float radius = 3.5;
  float pi = 3.14;
  float area = pi * radius * radius;
  printf("Area of the circle is: %f\n", area);

  FILE *fp;
  fp = fopen("file.txt", "w+");
  fprintf(fp, "Hello process B\n");
  fclose(fp);

  char str[256];
  fp = fopen("file.txt", "r");
  fgets(str, 256, fp);
  printf("%s\n", str);
  fclose(fp);

  return 0;
}