#include <stdio.h>
#include <math.h>

int main(void)
{
  int x = 13 + 17;
  printf("%d\n", x);

  printf("%d\n", 13 * 17);

  int x2 = 7;
  x2 *= 3;
  printf("%d\n", x2);
  x2 /= 2;
  printf("%d\n", x2);

  int x3 = 19, y3 = 23;
  int z3 = x3 * y3;
  printf("%d\n", z3);

  int x4 = 33;
  for (int i = 1; i <= 4; ++i)
  {
    printf("%d倍: %d\n", i, x4 * i);
  }

  int x5 = 33;
  for (int i = 1; i <= 3; ++i)
  {
    printf("%d乗: %.0f\n", i, pow(x5, i));
  }

  int x6 = 100;
  printf("%d, %d\n", x6 / 2, x6 % 2);

  x6++;
  printf("%d\n", x6);
  x6--;
  printf("%d\n", x6);

  int x7;
  printf("数値を入力してください\n");
  scanf("%d", &x7);
  for (int i = 1; i <= 3; ++i)
  {
    printf("%d乗: %.0f\n", i, pow(x7, i));
  }

  int x8 = 30, y8 = 10;
  printf("和: %d\n", x8 + y8);
  printf("差: %d\n", x8 - y8);
  printf("積: %d\n", x8 * y8);
  printf("商: %d\n", x8 / y8);
  printf("余: %d\n", x8 % y8);

  int x9, y9;
  printf("平均値の計算をします\n");
  printf("1つ目の数値を入力してください → ");
  scanf("%d", &x9);
  printf("2つ目の数値を入力してください → ");
  scanf("%d", &y9);
  printf("→ 平均値: %d\n", (x9 + y9) / 2);

  int age;
  printf("年齢を入力してください → ");
  scanf("%d", &age);
  printf("→ 生まれてから現在までのおおよその日数: %d日\n", age * 365);

  return 0;
}