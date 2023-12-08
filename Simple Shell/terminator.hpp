#ifndef TERMINATOR
#define TERMINATOR
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

#include <iostream>

using namespace std;
typedef pid_t pid;

void terminator(pid sigPid) {
  int status;
  pid processPid;
  time_t localTime = time(NULL);
  FILE *logFile;

  switch (sigPid) {
    case SIGCHLD:
      logFile = fopen("./shell.log", "a+");
      while ((processPid = waitpid(-1, &status, WNOHANG)) > 0) {
        fprintf(logFile, "%s\tChild process was terminated\n", asctime(localtime(&localTime)));
      }
      fclose(logFile);
      break;

    case SIGQUIT:
      cout << "Terminating..." << endl;
      exit(0);
      break;

    default:
      cout << sigPid << endl;
      break;
  }
}
#endif
