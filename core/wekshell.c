#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>

#define VERSION "0.1-0"

void Wekshell_Shell() {
	printf("Wekshell version: %s (%s, %s)\nType \"help\" for help\n",VERSION, __DATE__, __TIME__);
	char cmd[80];
	char * pcmd;
	pcmd = &cmd[0];
	char ps1[] = ">>> ";
	int canExit = 0;
	while (!canExit) {
		printf("%s", ps1);
		scanf("%s", cmd);
		printf("%s\n", cmd);
		}
#ifndef EXIT_SUCCESS
		#define EXIT_SUCCESS 0
#endif
}
void Wekshell_Execute(char * filename) {
	printf("filename");
}
void ParsePrompt(char * argv) {
	printf("%s\n", argv);
}
