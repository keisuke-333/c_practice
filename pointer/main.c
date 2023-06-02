#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a = 2;
  int *b = &a;

  printf("%d\n", *b);

  printf("%p\n", &a);
  printf("%p\n", b);
  printf("%p\n", &b);

  int i = 10;
  int *ip = &i;
  void *vp;

  vp = ip;
  printf("%p\n", vp);
  printf("%p\n", ip);
  printf("%d\n", *(int *)vp);
  printf("%d\n", *ip);

  int a2;
  void *b2 = &a2;
  *(int *)b2 = 30;
  printf("%d\n", a2);

  int *a3;
  a3 = malloc(sizeof(int));
  if (a3 == NULL)
  {
    printf("failed\n");
  }
  else
  {
    printf("success\n");
    free(a3);
  }

  return 0;
}