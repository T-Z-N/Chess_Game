#include <string>
#include <array>


class Player {
public:
	int ID;
	bool color;
	bool isWon;


	Player();

	Player(int ID, bool color, bool isWon);

	std::array<int,4> selectPiece();
	void movePiece(int x0, int y0, int x1, int y1);
};