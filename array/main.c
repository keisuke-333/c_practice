#include <stdio.h>

int main(void)
{
  int num;
  int array[100];
  printf("配列の個数は？ (100以内で入力)\n");
  scanf("%d", &num);
  int i;
  for (i = 0; i < num; i++)
  {
    array[i] = i + 1;
  }
  for (i = 0; i < num; i++)
  {
    printf("array[%d]：%d\n", i, array[i]);
  }

  return 0;
}