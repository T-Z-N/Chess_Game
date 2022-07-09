#pragma once

// Board // Player // State

#include <string>
#include "board.h"
#include "State.h"
#include "Player.h"

class GameService {
public:

	GameService(const GameService&) = delete;
	Board board;
	State state;

	static GameService& GetInstance();

	void init();

	void gameLoop();

private: 
	Player player1;
	Player player2;
	GameService() {
		player1 = Player(1, false, false);
		player2 = Player(2, true, false);
	}

	// Make this Singleton first
};