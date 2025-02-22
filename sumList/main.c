#include <stdio.h>
#include <stdlib.h>

int sumItemsInsideList(int *myList) {
	int sum = 0;

	for(int i = 0; i < sizeof(myList) / 2; i++) {
		sum+= myList[i];
	}

	return sum;
}

int main() {
	int myList[] = {1, 1, 1, 1};
	int result = 0;
	
	result = sumItemsInsideList(myList);
	
	printf("%d\n", result);

	return 0;
}
