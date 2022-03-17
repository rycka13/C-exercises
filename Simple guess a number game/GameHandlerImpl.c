#include <stdio.h>
#include "GameHandler.h"
#include "Game.h"

void start(char* userName) {
	initializeGame(userName);
}
char* showAnswer(int answer) {
	
	printf("%s", playGuessingGame(answer));
	return playGuessingGame(answer);
}