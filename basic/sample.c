#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hello(void);
int calculate(int amount);
int fruits(int apple, int fruits);
void calc(int x, int y, int *a1, int *a2);
int main(void)
{
  printf("Hello\n");
  printf("World\n");
  printf("%d\n", 10);
  printf("%f\n", 3 * 3 * 3.14);
  printf("%d\n", (int)(3 * 3 * 3.14));

  int value = 10;
  printf("%d\n", value);

  int number;
  scanf("%d", &number);
  printf("入力された値は %d です\n", number);

  hello();
  calculate(1000);

  int fruitsAmount;
  fruitsAmount = fruits(3, 2);
  printf("%d\n", fruitsAmount);

  int array1[10] = {1, 2, 3, 4, 5};
  int array2[] = {1, 2, 3, 4, 5};
  printf("%d\n", array1[4]);
  printf("%d\n", array2[4]);

  int i;
  for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++)
  {
    printf("%d番目：%d\n", i, array2[i]);
  }
  printf("%lu\n", sizeof(array2));
  printf("%lu\n", sizeof(array2[0]));

  char c = 'A';
  printf("%c\n", c);

  char str1[5] = {'J', 'o', 'h', 'n', '\0'};
  printf("%s\n", str1);
  char str2[] = "John";
  printf("%s\n", str2);
  char str3[] = "123";
  int num = atoi(str3);
  printf("%d\n", num);
  char str4[10];
  strcpy(str4, "Mike");
  printf("%s\n", str4);
  char str5[10] = "Star";
  char str6[] = "Wars";
  strcat(str5, str6);
  printf("%s\n", str5);

  char str7[20];
  char str8[] = "Star";
  char str9[] = "Wars";
  int ii = 3;
  sprintf(str7, "%s %s %d\n", str8, str9, ii);
  printf("%s", str7);

  int iii = strlen(str7);
  printf("%d\n", iii);

  int banana = 10;
  int *hoge;
  hoge = &banana;
  printf("%d\n", banana);
  printf("%p\n", hoge);

  int *p, q;
  p = &q;
  *p = 15;
  printf("%d\n", *p);
  printf("%d\n", q);

  int addition;
  int subtraction;
  calc(30, 10, &addition, &subtraction);
  printf("%d\n", addition);
  printf("%d\n", subtraction);

  return 0;
}

int hello(void)
{
  printf("ありがとう\n");
  return 0;
}

int calculate(int amount)
{
  printf("%f\n", amount * 1.1);
  return 0;
}

int fruits(int apple, int orange)
{
  int amount;
  amount = (apple * 300) + (orange * 300);
  return amount;
}

void calc(int x, int y, int *a1, int *a2)
{
  *a1 = x + y;
  *a2 = x - y;
}