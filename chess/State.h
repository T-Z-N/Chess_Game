#include<string>

class State {
public:
	int currentPlayerId;
	std::string gameSituation;

	State();

	void init();
};