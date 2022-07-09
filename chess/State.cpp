#include "State.h"

State::State()
{
}

void State::init()
{
	this->currentPlayerId = 1;
	this->gameSituation = "playing";
}
