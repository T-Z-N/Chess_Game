#include "piece.h"

Pawn::Pawn(int id, int x_pos, int y_pos, bool color, bool selected, std::string name)
{
	Pawn::id = id;
	Pawn::x_pos = x_pos;
	Pawn::y_pos = y_pos;
	Pawn::color = color;
	Pawn::selected = selected;
	Pawn::name = name;

}

Rook::Rook(int id, int x_pos, int y_pos, bool color, bool selected, std::string name)
{
	Rook::id = id;
	Rook::x_pos = x_pos;
	Rook::y_pos = y_pos;
	Rook::color = color;
	Rook::selected = selected;
	Rook::name = name;
}

Knight::Knight(int id, int x_pos, int y_pos, bool color, bool selected, std::string name)
{
	Knight::id = id;
	Knight::x_pos = x_pos;
	Knight::y_pos = y_pos;
	Knight::color = color;
	Knight::selected = selected;
	Knight::name = name;
}

Bishop::Bishop(int id, int x_pos, int y_pos, bool color, bool selected, std::string name)
{
	Bishop::id = id;
	Bishop::x_pos = x_pos;
	Bishop::y_pos = y_pos;
	Bishop::color = color;
	Bishop::selected = selected;
	Bishop::name = name;
}

Queen::Queen(int id, int x_pos, int y_pos, bool color, bool selected, std::string name)
{
	Queen::id = id;
	Queen::x_pos = x_pos;
	Queen::y_pos = y_pos;
	Queen::color = color;
	Queen::selected = selected;
	Queen::name = name;
}

King::King(int id, int x_pos, int y_pos, bool color, bool selected, std::string name)
{
	King::id = id;
	King::x_pos = x_pos;
	King::y_pos = y_pos;
	King::color = color;
	King::selected = selected;
	King::name = name;
}

None::None(int id, int x_pos, int y_pos, bool color, bool selected, std::string name) {
	None::id = id;
	None::x_pos = x_pos;
	None::y_pos = y_pos;
	None::color = color;
	None::selected = selected;
	None::name = name;
}
