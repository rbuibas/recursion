#include <stdio.h>
#include <stdlib.h>

int factorial_tail(int, int);
void recursive_printing(int);

int main(int argc, char ** argv) {
	if (argc == 1) printf("Please provide something to count down from.\n");
	if (argc > 2) printf("Whoaaaa... Chill.\n");
	if (argc == 2) {
		long conv = strtol(argv[1], NULL, 10);
		recursive_printing((int) conv);
		printf("Factorial of %d is %d\n", (int) conv, factorial_tail(1,(int) conv));
	}
	return 0;
}

void recursive_printing(int countdown) {
	if (countdown == 0)
		return;
	recursive_printing(--countdown);
}

int factorial_tail(int sum, int n) {
	if (n == 1) return sum;
	int newSum = sum * n;
	factorial_tail(newSum, --n);
}