#include <stdio.h>

struct Student
{
  int year;
  char name[64];
  double weight;
  double height;
} Jiro, Goro;

int main(void)
{
  struct Student Tarou;
  Tarou.year = 10;
  printf("%d\n", Tarou.year);
  Jiro.year = 9;
  Goro.year = 8;
  printf("%d\n", Jiro.year);
  printf("%d\n", Goro.year);
  return 0;
}