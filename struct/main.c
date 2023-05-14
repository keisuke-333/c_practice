#include <stdio.h>

struct Student
{
  int year;
  char name[64];
  double weight;
  double height;
} Jiro, Goro;

struct Fruits
{
  int apple;
  int banana;
  int orange;
};

int main(void)
{
  struct Student Tarou;
  Tarou.year = 10;
  printf("%d\n", Tarou.year);
  Jiro.year = 9;
  Goro.year = 8;
  printf("%d\n", Jiro.year);
  printf("%d\n", Goro.year);

  struct Fruits store1 = {150, 100, 200};
  printf("apple:%d, banana:%d, orange%d\n", store1.apple, store1.banana, store1.orange);
  return 0;
}