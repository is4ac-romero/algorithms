#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countVowels(char *word, char *vowels, int *count) {
	for(int i = 0; i < strlen(word); i++) {
		for(int j = 0; j < strlen(vowels); j++) {
			if(word[i] == vowels[j]) {
				count[j]++;
			}
		}
	}	
	
}	

int main() {
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	int count[5] = {};
	char word[]= {"aeiou"};

	countVowels(word, vowels, count);

	for(int i = 0; i < sizeof(count) / 4; i++) {
		printf("[%c] = %d\n", vowels[i], count[i]);
	}

	return 0;
}
