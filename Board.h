//
// Created by Hillal Aimene on 2019-04-05.
//

#ifndef SUDOKU_BOARD_H
#define SUDOKU_BOARD_H

#include "Box.h"
#include "Region.h"

class Board {

private:
    Box* gameBoard[9][9];
    Region* regionTab[3][3];

    /**
     * Private method witch initialize the gameBord array by putting in boxes objects
     */
    void gameBoardInit();

    /**
     * Private method called to make a list of Regions which contains pointers to
     * boxes witch are located on this region.
     */
    void regionsInit();

public:

    Board();

};

#endif //SUDOKU_BOARD_H
