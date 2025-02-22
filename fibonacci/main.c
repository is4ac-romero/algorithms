#include <stdio.h>
#include <stdlib.h>

void generateFibonacci(int *sequence) {
	int t1 = -1;
	int t2 = 1;
	int t3 = 0;

	printf("%ld\n\n", sizeof(sequence));

	for(int i = 0; i < 13; i++) {
		t3 = t1 + t2;
		sequence[i] = t3;
		t1 = t2;
		t2 = t3;
	}
}

int main() {
	int quantityOfTerms = 13;
	int sequence[quantityOfTerms] = {};
	
	generateFibonacci(sequence);
	
	for(int i = 0; i < quantityOfTerms; i++) {
		printf("%d, ", sequence[i]);
	}

	return 0;
}
