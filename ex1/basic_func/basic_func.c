#include <stdio.h>

void print_hello_world(void)
{
  printf("Hello World\n");
}

void print_first_phrase(void)
{
  printf("ふるいけや\n");
}

void print_second_phrase(void)
{
  printf("かわずとびこむ\n");
}

void print_third_phrase(void)
{
  printf("みずのおと\n");
}

int main(void)
{
  printf("Hello World\n");
  print_hello_world();
  print_first_phrase();
  print_second_phrase();
  print_third_phrase();
  return 0;
}