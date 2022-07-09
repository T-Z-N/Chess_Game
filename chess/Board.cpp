#include "Board.h"
#include "piece.h"

void Board::init() {
	// Black
	//ID, X_Pos, Y_Pos, Color, Selected, Name
	chessboardData.push_back(Rook(0, 0, 0, false, false, "R"));
	chessboardData.push_back(Knight(1, 1, 0, false, false, "N"));
	chessboardData.push_back(Bishop(2, 2, 0, false, false, "B"));
	chessboardData.push_back(Queen(3, 3, 0, false, false, "Q"));
	chessboardData.push_back(King(4, 4, 0, false, false, "K"));
	chessboardData.push_back(Bishop(5, 5, 0, false, false, "B"));
	chessboardData.push_back(Knight(6, 6, 0, false, false, "N"));
	chessboardData.push_back(Rook(7, 7, 0, false, false, "R"));
	
	chessboardData.push_back(Pawn(8, 0, 1, false, false, "P"));
	chessboardData.push_back(Pawn(9, 1, 1, false, false, "P"));
	chessboardData.push_back(Pawn(10, 2, 1, false, false, "P"));
	chessboardData.push_back(Pawn(11, 3, 1, false, false, "P"));
	chessboardData.push_back(Pawn(12, 4, 1, false, false, "P"));
	chessboardData.push_back(Pawn(13, 5, 1, false, false, "P"));
	chessboardData.push_back(Pawn(14, 6, 1, false, false, "P"));
	chessboardData.push_back(Pawn(15, 7, 1, false, false, "P"));

	for (int j = 0;j < 8;j++)
	{
			chessboardData.push_back(None(j + 16, j, 2, false, false, "*"));
	}
	for (int j = 0;j < 8;j++)
	{
		chessboardData.push_back(None(j + 24, j, 3, false, false, "*"));
	}
	for (int j = 0;j < 8;j++)
	{
		chessboardData.push_back(None(j + 32, j, 4, false, false, "*"));
	}
	for (int j = 0;j < 8;j++)
	{
		chessboardData.push_back(None(j + 40, j, 5, false, false, "*"));
	}
	
	// White
	chessboardData.push_back(Pawn(49, 0, 6, true, false, "p"));
	chessboardData.push_back(Pawn(50, 1, 6, true, false, "p"));
	chessboardData.push_back(Pawn(51, 2, 6, true, false, "p"));
	chessboardData.push_back(Pawn(52, 3, 6, true, false, "p"));
	chessboardData.push_back(Pawn(53, 4, 6, true, false, "p"));
	chessboardData.push_back(Pawn(54, 5, 6, true, false, "p"));
	chessboardData.push_back(Pawn(55, 6, 6, true, false, "p"));
	chessboardData.push_back(Pawn(56, 7, 6, true, false, "p"));

	chessboardData.push_back(Rook(57, 0, 7, true, false, "r"));
	chessboardData.push_back(Knight(58, 1, 7, true, false, "n"));
	chessboardData.push_back(Bishop(59, 2, 7, true, false, "b"));
	chessboardData.push_back(Queen(60, 3, 7, true, false, "q"));
	chessboardData.push_back(King(61, 4, 7, true, false, "k"));
	chessboardData.push_back(Bishop(62, 5, 7, true, false, "b"));
	chessboardData.push_back(Knight(63, 6, 7, true, false, "n"));
	chessboardData.push_back(Rook(64, 7, 7, true, false, "r"));
}

int Board::Selected_Piece(int x_piece_position, int y_piece_position)
{

}
bool Board::isPositionEmpty(int x, int y) {
	auto chessboardDataLength = chessboardData.size();
	bool isPositionEmpty = true;
	for (auto i = 0; i < chessboardDataLength; i++) {
		if (chessboardData[i].x_pos == x && chessboardData[i].y_pos == y) {
			isPositionEmpty = false;
			break;
		}
	}

	return isPositionEmpty;
}

int Board::getPieceIdByPosition(int x, int y) {
	auto chessboardDataLength = chessboardData.size();
	bool isPositionEmpty = true;
	int pieceId = -1;
	for (auto i = 0; i < chessboardDataLength; i++) {
		if (this->chessboardData[i].x_pos == x && chessboardData[i].y_pos == y) {
			isPositionEmpty = false;
			if (!isPositionEmpty) {
				pieceId = chessboardData[i].id;
			}
			break;
		}
	}

	return pieceId;
}

void Board::movePiece(int pieceId, int move_position_x, int move_position_y) {
	auto chessboardDataLength = this->chessboardData.size();
	for (auto i = 0; i < chessboardDataLength; i++) {
		if (chessboardData[i].id == pieceId) {
			chessboardData[i].x_pos = move_position_x;
			chessboardData[i].y_pos = move_position_y;
		}
	}
}

bool Board::isPositionFriendly(bool playerColor, int pieceId, int move_position_x, int move_position_y) {
	auto chessboardDataLength = chessboardData.size();
	bool isPositionFriendly = false;
	for (auto i = 0; i < chessboardDataLength; i++) {
		if (chessboardData[i].x_pos == move_position_x && chessboardData[i].y_pos == move_position_y) {
			if (chessboardData[i].color == playerColor)
				isPositionFriendly = true;
				break;
		}
	}

	return isPositionFriendly;
}

void Board::processMoveCommand(int piece_position_x, int piece_position_y, int move_position_x, int move_position_y, bool playerColor) {
	int pieceId = Board::getPieceIdByPosition(piece_position_x, piece_position_y);
	if (pieceId != -1) {
		bool isPositionEmpty = Board::isPositionEmpty(move_position_x, move_position_y);
		std::cout << "isPositionEmpty" << isPositionEmpty << '\n';
		if (isPositionEmpty) {
			Board::move(pieceId, move_position_x, move_position_y);
		}
		else {
			bool isPositionFriendly = Board::isPositionFriendly(playerColor, pieceId, move_position_x, move_position_y);
			std::cout << "isPositionFriendly" << isPositionFriendly << '\n';
			if (!isPositionFriendly) {
				Board::eat(pieceId, move_position_x, move_position_y);
			}
		}
	}
}

void Board::move(int pieceId, int move_position_x, int move_position_y) {
	Board::movePiece(pieceId, move_position_x, move_position_y);
}

void Board::eat(int pieceId, int move_position_x, int move_position_y) {
	auto chessboardDataLength = chessboardData.size();
	int pieceIDToEat = Board::getPieceIdByPosition(move_position_x, move_position_y);
	std::vector<Piece>newChessboardData;
	for (auto i = 0; i < chessboardDataLength; i++) {
		if (chessboardData[i].id != pieceIDToEat) {
			newChessboardData.push_back(chessboardData[i]);
		}
	}
	chessboardData = newChessboardData;
	Board::move(pieceId, move_position_x, move_position_y);
}


void Board::printBoard() {
	auto chessboardDataLength = chessboardData.size();
	/*bool isPositionEmpty = Board::isPositionEmpty;
	if (isPositionEmpty){*/
		for (int i = 0; i < 64; i++) {
		if (i == 8 || i == 16 || i == 24 || i == 32 || i == 40 || i == 48 || i == 56 || i == 64){
			std::cout << "\n";
		}
			chessboard[chessboardData[i].x_pos][chessboardData[i].y_pos] = chessboardData[i].name;
			std::cout << chessboard[chessboardData[i].x_pos][chessboardData[i].y_pos];
	}
	
}
	
