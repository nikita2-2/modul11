#include "forest.h"
#include <iostream>

void Forest::addTree(Tree* tree) {
    trees.push_back(tree);
}

void Forest::wind() const {
    for (auto& tree : trees) {
        tree->wind();
    }
}

void Forest::printTreeCounts() const {
    std::cout << "Oaks: " << Tree::getCount(OAK) << std::endl;
    std::cout << "Maples: " << Tree::getCount(MAPLE) << std::endl;
    std::cout << "Birches: " << Tree::getCount(BIRCH) << std::endl;
}

