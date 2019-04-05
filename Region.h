//
// Created by Hillal Aimene on 2019-04-05.
//

#ifndef SUDOKU_REGION_H
#define SUDOKU_REGION_H


#include "Box.h"

class Region {

public:
    Region(int i, int j, int iBoxPilote, int jBoxPilote);
    void RegionInit(const Box* gameBoard[9][9]);
private:
    int i, j, iBoxPilote, jBoxPilote;
    Box* boxTab[9];


};


#endif //SUDOKU_REGION_H
