#include <stdio.h>
#include <sys/io.h>

#include "wekshell.c"

	int main(int argc, char **argv)
{
	char * cmd[15];
	for (int i=0; i < argc; i++) {
		cmd[i] = argv[i];
	}
	if (argc == 1) {
		Wekshell_Shell();
	}
	else {
		ParsePrompt(* argv);
	}
  return EXIT_SUCCESS;
}
