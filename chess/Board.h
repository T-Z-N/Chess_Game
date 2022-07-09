#pragma once
#include <array>
#include <vector>
#include "piece.h"


class Board {
public:
    std::array<std::array<std::string,8>,8> chessboard;
    std::vector<Piece>chessboardData;
    
   
    void init();
    void move(int pieceId, int move_position_x, int move_position_y);
    bool isPositionEmpty(int x, int y);
    bool isPositionFriendly(bool playerColor, int id, int move_position_x, int  move_position_y);
    int getPieceIdByPosition(int x, int y);
    void processMoveCommand(int piece_position_x, int piece_position_y, int move_position_x, int move_position_y, bool playerColor);
    void movePiece(int pieceId, int move_position_x, int move_position_y);
    void eat(int pieceId, int move_position_x, int move_position_y);
    void printBoard();

    int Board::Selected_Piece(int x_piece_position, int y_piece_position)

private:


};
