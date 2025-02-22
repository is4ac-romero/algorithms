#include <stdio.h>
#include <stdlib.h>

void multiplicationTable(int number) {
	int product = 0;

	for(int i = 0; i < 10; i++) {
		product = number * (i+1);
		printf("%d x %d = %d\n", number, i+1, product);
	}
}

int main() {
	int number = 5;

	multiplicationTable(number);

	return 0;
}
