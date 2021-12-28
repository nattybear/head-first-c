#include <stdio.h>

struct fish {
  const char *name;
  const char *species;
  int teeth;
  int age;
};

int main()
{
  struct fish snappy = {"Snappy", "piranha", 69, 4};
  printf("Name = %s\n", snappy[0]);
}
