#include "Player.h"
#include <iostream>
#include <array>

Player::Player()
{
}

Player::Player(int ID, bool color, bool isWon) {
	Player::ID = ID;
	Player::color = color;
	Player::isWon = isWon;
}

std::array<int, 4> Player::selectPiece() {
	// Ask from terminal
	int x0, y0, x1, y1;
	std::cout << "Player ID" << Player::ID << '\n';
	std::cout << "Enter Piece-X position:" << '\n';
	std::cin >> x0;
	std::cout << "Enter Piece-Y position:" << '\n';
	std::cin >> y0;
	std::cout << "Enter MovePosition-X position:" << '\n';
	std::cin >> x1;
	std::cout << "Enter MovePosition-Y position:" << '\n';
	std::cin >> y1;

	if (!std::cin) {
		std::runtime_error("couldn't read a double in some_function()");
	}

	return { x0, y0, x1, y1 };
}
void Player::movePiece(int x0, int y0, int x1, int y1) {
	// Call Game Service so that it calls Board move()
}
