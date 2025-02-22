#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool checkPalindrome(char *word) {
	int j = strlen(word) - 1;
	
	for(int i = 0; i < strlen(word) - 1; i++) {
		if(word[i] != word[j]) {
			return false;
		} else {
			j--;
		}
	}
	return true;
}

int main() {
	char word[255] = {"ana"};	
	bool palindrome = false;

	palindrome = checkPalindrome(word);
	printf("%d", palindrome);
	return 0;
}
