#include <stdio.h>

typedef union {
  short count;
  float weight;
  float volume;
} quantity;

typedef struct {
  const char *name;
  const char *country;
  quantity amount;
} fruit_order;

int main()
{
  fruit_order apples = {"apples", "England", .amount.weight=4.2};
  printf("This order contains %2.2f lbs of %s\n", apples.amount.weight, apples.name);
  return 0;
}
