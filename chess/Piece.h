#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "piece.h"


//Elternklasse
class Piece {

public:
	int id;
	int x_pos;
	int y_pos;
	bool color;
	bool selected;
	std::string name;
	
private:
};

class Pawn : public Piece {
public:

	Pawn(int id, int x_pos, int y_pos, bool color, bool selected, std::string name);
private:
};

class Rook : public Piece {
public:
	Rook(int id, int x_pos, int y_pos, bool color, bool selected, std::string name);
private:
};

class Knight : public Piece {
public:
	Knight(int id, int x_pos, int y_pos, bool color, bool selected, std::string name);
private:
};

class Bishop : public Piece {
public:
	Bishop(int id, int x_pos, int y_pos, bool color, bool selected, std::string name);
private:
};

class Queen : public Piece {
public:
	Queen(int id, int x_pos, int y_pos, bool color, bool selected, std::string name);
private:
};

class King : public Piece {
public:
	King(int id, int x_pos, int y_pos, bool color, bool selected, std::string name);
private:
};
class None :public Piece {
public:
	None(int id, int x_pos, int y_pos, bool color, bool selected, std::string name);
};