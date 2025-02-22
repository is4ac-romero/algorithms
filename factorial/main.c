#include <stdio.h>
#include <stdlib.h>

int factorial(int number) {
	int result = number; //the result is based on the (result(number) * i, result = number), making it until achieve number - 1 as condition 

	if(number == 0) { //the factorial of 0! = 1
		return 1;
	} else { 
		for(int i = 1; i < number; i++) {
			result *= i; // 3! = (3 * i=1 * i+1 = 2)	
		}

		return result;
	}	
}

int main() {
	int result = 0; //variable to store the result
	int number = 3; //number!

	result = factorial(number); //it does the factorial

	printf("%d", result); //printf the result

	return 0;
}
