#include <iostream>
#include <vector>
#include "board.h"
#include "piece.h"
#include "GameService.h"

using std::cout;
using std::cin;
using std::endl;

//Pawn::Pawn(const Pawn &pawn){
//    cout << "Copy Construktor" << endl;
//}

//Chessman::Chessman(std::vector<std::vector <int>> init_position) {
//
//}

int main() {

    // Game service will be instantiated using .GetInstance() method
    // It will be used in main and also in Player classes.
    // Player will open the termnial, and then call Service Instance for commands. (e.g. move())
    // GameService will initiate and call Board to order the moves.
    // Board will make the move and inform(call) GameService for GameState update.
    // At last, GameService will update the GameState and set currentPlayer and gameWon boolean.

    // Here, only init gameService to init the game.
    // There will be a while loop in GameService which will keep calling players' choosePiece method until the State.gameWon is true.
    // Init might call GameService.loop method for example.

    GameService::GetInstance().init();

    return 0;
}