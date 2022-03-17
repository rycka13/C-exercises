#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "GameHandler.h"

int main() {

	int userAnswer;
	int* answerPointer = &userAnswer;
	char userName[100];
	printf("What is your name? \n");
	scanf_s("%s", userName, (unsigned)sizeof(userName));
	start(userName);
	printf("The program selected a random number (from 0 to 100), and you can try to guess it! \n");
	
	char* answerFromSystem = "";
	while (strcmp(answerFromSystem,"Correct!"))
	{
		printf("What is your guess? \n");
		scanf_s("%4d", answerPointer);

		answerFromSystem = showAnswer(userAnswer);
	}
	
	printf("You won! Press any key to exit \n");
	scanf_s("");

	return 0;
}