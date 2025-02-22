#include <stdio.h>
#include <stdlib.h>

int sum(int firstParcel, int secondParcel) { //return an integer value
//parcel is part of an operation = parcel + parcel = result or total
	return firstParcel + secondParcel; //return the sum
}

int main() {
	int result = 0; //var to save the result

	result = sum(1, 1); //the return of the result is the result

	printf("%d\n", result); //show the result 

	return 0;
}
