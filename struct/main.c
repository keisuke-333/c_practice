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

typedef struct
{
  int onigiri;
  int bread;
  int burger;
} Food;

struct Test
{
  char name[32];
  int kokugo;
  int sansu;
  int eigo;
};

struct Test student[3] = {
    {"一郎", 60, 70, 80},
    {"二郎", 70, 90, 85},
    {"三郎", 80, 78, 90},
};

void price(struct Fruits store)
{
  printf("リンゴの金額：%d\n", store.apple);
  printf("バナナの金額：%d\n", store.banana);
  printf("オレンジの金額：%d\n", store.orange);
  return;
};

void line(void)
{
  int i;
  for (i = 0; i < 50; i++)
  {
    printf("-");
  }
  printf("\n");
  return;
};

void show(void)
{
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("%8s %8d %8d %8d\n", student[i].name, student[i].kokugo, student[i].sansu, student[i].eigo);
  }
  return;
}

void price(struct Fruits store);
void line(void);
void show(void);
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
  price(store1);

  printf("%10s %10s %10s %10s\n", "名前", "国語", "算数", "英語");
  line();
  show();
  line();

  typedef unsigned int seisu;
  seisu number = 10;
  printf("%d\n", number);

  Food store2;
  store2.bread = 100;
  printf("パンの金額：%d\n", store2.bread);

  return 0;
}