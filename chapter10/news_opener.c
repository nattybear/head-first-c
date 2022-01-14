#include <stdio.h>
#include <unistd.h>
#include "error.h"
#include "open_url.h"

int main(int argc, char *argv[])
{
  char *phrase = argv[1];
  char *vars[] = {"RSS_FEED=http://rss.cnn.com/rss/edition.rss", NULL};
  int fd[2];
  if (pipe(fd) == -1) {
    error("Can't create the pipe");
  }
  pid_t pid = fork();
  if (pid == -1) {
    error("Can't fork process");
  }
  if (!pid) {
    dup2(fd[1], 1);
    close(fd[0]);
    if (execle("/usr/bin/python3", "/usr/bin/python3", "./rssgossip.py",
                 "-u", phrase, NULL, vars) == -1) {
      error("Can't run script");
    }
  }
  dup2(fd[0], 0);
  close(fd[1]);
  char line[255];
  while (fgets(line, 255, stdin)) {
    if (line[0] == '\t')
      open_url(line + 1);
  }
  return 0;
}
