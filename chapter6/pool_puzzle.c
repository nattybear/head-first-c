#include "island.h"

int main()
{
  island *start = NULL;
  island *i = NULL;
  island *next = NULL;
  char name[80];
  for (; fgets(name, 80, stdin) != NULL; i = next) {
    next = create(name);
    if (start == NULL)
      start = next;
    if (i != NULL)
      i->next = next;
  }
  display(start);
  return 0;
}
