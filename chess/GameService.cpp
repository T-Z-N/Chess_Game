#include "GameService.h"

GameService& GameService::GetInstance() {
	static GameService instance;
	return instance;
}

void GameService::init() {
	// Initiate Board
	// Initiate State
	// Initiate Players
	
	/*Board board;
	State state;*/

	GameService::board.init();
	GameService::state.init();

	GameService::gameLoop();
}

void GameService::gameLoop() {

	while (state.gameSituation != "end") {
		if (state.currentPlayerId == 1) {
			board.printBoard();
			auto position_array = player1.selectPiece();
			board.processMoveCommand(position_array[0], position_array[1], position_array[2], position_array[3], player1.color);
			state.currentPlayerId = 2;
		}
		else if (state.currentPlayerId == 2) {
			board.printBoard();
			auto position_array = player2.selectPiece();
			board.processMoveCommand(position_array[0], position_array[1], position_array[2], position_array[3], player2.color);
			state.currentPlayerId = 1;
		}
	}
}

// Define 