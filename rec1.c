#include <stdio.h>
#include <stdlib.h>

int recursive_printing(int);

int main(int argc, char ** argv) {
	if (argc == 1) printf("Please provide something to count down from.\n");
	if (argc > 2) printf("Whoaaaa... Chill.\n");
	if (argc == 2) {
		long conv = strtol(argv[1], NULL, 10);
		recursive_printing((int) conv);
	}
	return 0;
}

int recursive_printing(int countdown) {
	if (countdown == 0)
		return 0;
	printf("%d\n", countdown);
	recursive_printing(--countdown);
}