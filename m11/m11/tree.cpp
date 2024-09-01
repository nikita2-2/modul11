#include "tree.h"

Tree::Tree(TreeType type) : treeType(type) {
    if (type == OAK) {
        oakCount++;
    }
    else if (type == MAPLE) {
        mapleCount++;
    }
    else {
        birchCount++;
    }
}

void Tree::wind() const {} // ?????? ??????????

TreeType Tree::getType() const {
    return treeType;
}

int Tree::getCount(TreeType type) {
    if (type == OAK) {
        return oakCount;
    }
    else if (type == MAPLE) {
        return mapleCount;
    }
    else {
        return birchCount;
    }
}

int Tree::oakCount = 0;
int Tree::mapleCount = 0;
int Tree::birchCount = 0;
