#include <stdio.h>
#include <unistd.h>

int main()
{
  char *my_env[] = {"JUICE=peach and apple", NULL};
  execle("diner_info", "diner_info", "4", NULL, my_env);
  puts("Dude - the diner_info code must be busted");
  return 0;
}
