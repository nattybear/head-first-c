#include <stdio.h>
#include "fish.h"

int main()
{
  struct fish snappy = {"Snappy", "piranha", 69, 4};
  printf("Name = %s\n", snappy.name);
}
