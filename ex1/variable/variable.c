#include <stdio.h>

int main(void)
{
  int age = 35;
  printf("%d歳\n", age);

  int year = 1987;
  int month = 6;
  int day = 18;
  printf("%d年 %d月 %d日\n", year, month, day);

  int x1 = 11;
  printf("x=%d\n", x1);

  int x2 = 13, y2 = 17;
  printf("x=%d, y=%d\n", x2, y2);

  int temp;
  temp = x2;
  x2 = y2;
  y2 = temp;
  printf("x=%d, y=%d\n", x2, y2);

  int x3;
  printf("数値を入力してください\n");
  scanf("%d", &x3);
  printf("入力された数値: %d\n", x3);

  return 0;
}