#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc==1) {
		printf("You only have one arg!\n");
	} else if (argc>1 && argc <4) {
		printf("Here are your args:\n");

		for (i=0; i<argc; i++) {
			printf("%s ", argv[i]);
		}

		printf("\n");
	} else {
		printf(" Too many args");
	}

	return 0;
}

