#include "GuessTheNumberGame.h"
#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h> 

static int randomNumber;

char* checkAnswer(int answer) {
	const char goUp[20] = "Guess up";
	const char goDown[20] = "Guess down";
	const char correct[20] = "Correct!";
	

	int number = rand() % 100 + 1;
	randomNumber = number;


	if (answer > randomNumber) {
		return goDown;
	}
	if (answer < randomNumber) {
		return goUp;
	}
	else {
		return correct;
	}
}

int main() {
	int number = rand() % 100 + 1;
	randomNumber = number;
	
	return 0;
}
