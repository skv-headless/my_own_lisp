#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

static char input[2048];

int main(int argc, char** argv) {

  puts("Lispy Version 0.0.0.1");
  puts("Press Ctrl+c to exit\n");

  while(1) {
    char* input = readline("lispy> ");
    add_history(input);
    printf("You are %s", input);
    free(input);
  }

  return 0;
}
