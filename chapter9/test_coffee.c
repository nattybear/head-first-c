#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main()
{
  char *my_env[] = {"FOOD=coffee", NULL};
  if (execle("./coffee", "./coffee", "donuts", NULL, my_env) == -1) {
    fprintf(stderr, "Can't run process 0: %s\n", strerror(errno));
    return 1;
  }
}
