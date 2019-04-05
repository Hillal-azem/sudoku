//
// Created by Hillal Aimene on 2019-04-05.
//

#include "Board.h"
#include "Box.h"


Board::Board(){
    gameBoardInit();

    // TODO
    //  make Region objects here ??
    //  => call th regionsInit() method
}

void Board::gameBoardInit() {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            gameBoard[i][j] = new Box(i,j,0,false,true);
        }
    }
}

void Board::regionsInit() const {

}