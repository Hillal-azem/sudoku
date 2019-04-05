//
// Created by Hillal Aimene on 2019-04-05.
//

#ifndef SUDOKU_BOX_H
#define SUDOKU_BOX_H


class Box {

public:
    Box(int i, int j, int value, bool visible, bool canChange);


private:
    int i, j, value;
    bool visible, canChange;
};


#endif //SUDOKU_BOX_H
