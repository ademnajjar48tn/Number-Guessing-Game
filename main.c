#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int* guess = (int*) malloc(sizeof(int));
	
	srand(time(0));
	int* randNum = (int*) malloc(sizeof(int));
	
	*randNum = rand() % 100 + 1;
	
	int* tries = (int*) malloc(sizeof(int));
	*tries = 0;
	
	printf("Guess the random number in range of (1 to 100): ");

	do {
		*tries += 1;

		scanf("%d", guess);

		if(*guess > *randNum) {
			printf("The number is less than %d: ", *guess);
		}
		else if(*guess < *randNum) {
			printf("The number is greater than %d: ", *guess);
		}

	}while(*guess != *randNum);

	printf("Congrats you have guessed the random number in %d tries\n", *tries); 

	free(guess);
	free(randNum);
	free(tries);

	return 0;
}
