#include <stdio.h>
#include <stdlib.h>

struct st
{
  int a;
  int b;
};

typedef struct
{
  int a;
  int b;
} t;

int main(int argc, char *argv[])
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

  int a4[3] = {10, 20, 30};
  int *b4 = a4;

  printf("%p\n", a4);        // address
  printf("%p\n", a4 + 0);    // address
  printf("%p\n", &a4[0]);    // address
  printf("%p\n", b4);        // address
  printf("%p\n", b4 + 0);    // address
  printf("%d\n", a4[0]);     // value
  printf("%d\n", *(a4 + 0)); // value
  printf("%d\n", *(b4 + 0)); // value

  printf("%p\n", a4 + 1); // address
  printf("%p\n", &a4[1]); // address
  printf("%p\n", b4 + 1); // address
  printf("%p\n", a4 + 2); // address
  printf("%p\n", &a4[2]); // address

  printf("%d\n", a4[1]);     // value
  printf("%d\n", *(a4 + 1)); // value
  printf("%d\n", *(b4 + 1)); // value
  printf("%d\n", a4[2]);     // value
  printf("%d\n", *(a4 + 2)); // value
  printf("%d\n", *(b4 + 2)); // value

  int *a5[3];
  printf("%p\n", a5);

  int a6[3] = {1, 2, 3};
  int(*b6)[3] = &a6;
  printf("%d\n", (*b6)[0]);
  printf("%d\n", (*b6)[1]);
  printf("%d\n", (*b6)[2]);

  int a7[3] = {10, 20, 30};
  int b7[3] = {40, 50, 60};
  int(*c7[2])[3] = {&a7, &b7};
  printf("%d\n", (*c7[0])[0]);
  printf("%d\n", (*c7[0])[1]);
  printf("%d\n", (*c7[0])[2]);
  printf("%d\n", (*c7[1])[0]);
  printf("%d\n", (*c7[1])[1]);
  printf("%d\n", (*c7[1])[2]);

  if (argc > 3)
  {
    printf("%s\n", argv[0]);
    printf("%s\n", argv[1]);
    printf("%s\n", argv[2]);
    printf("%s\n", argv[3]);
    printf("%s\n", *(argv + 3));
  }

  struct st d = {5, 10};
  struct st *p1 = &d;
  printf("%d\n", (*p1).a);
  printf("%d\n", (*p1).b);
  printf("%d\n", p1->a);
  printf("%d\n", p1->b);

  t *p2;
  p2 = malloc(sizeof(t));
  p2->a = 3;
  printf("%d\n", p2->a);
  free(p2);

  int a8 = 10;
  int *a9 = &a8;
  int **a10 = &a9;
  printf("%d\n", **a10);
  **a10 = 100;
  printf("%d\n", a8);

  return 0;
}