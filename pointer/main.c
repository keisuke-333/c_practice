#include <stdio.h>

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

  return 0;
}