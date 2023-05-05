#include <stdio.h>

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
  printf("入力された値は %d です", number);

  return 0;
}