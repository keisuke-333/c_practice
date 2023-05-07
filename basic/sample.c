#include <stdio.h>

int hello(void);
int calculate(int amount);
int fruits(int apple, int fruits);
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