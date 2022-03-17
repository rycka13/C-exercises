#include "Game.h"
#include "GuessTheNumberGame.h"

extern char* userName;

void initializeGame(char* playerName) {
	userName = playerName;
}
char* getPlayerName() {
	return userName;
}
char* playGuessingGame(int answer) {
	return checkAnswer(answer);
}