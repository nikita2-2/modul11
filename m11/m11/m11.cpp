#include "forest.h"
#include "oak.h"
#include "maple.h"
#include "birch.h"
#include <iostream>

int main() {
    Forest forest;

    forest.addTree(new Oak());
    forest.addTree(new Maple());
    forest.addTree(new Birch());
    forest.addTree(new Oak());
    forest.addTree(new Maple());
    forest.addTree(new Birch());
    forest.addTree(new Birch());

    std::cout << "wind" << std::endl;
    forest.wind();

    std::cout << "Trees:" << std::endl;
    forest.printTreeCounts();
    std::cin.get();


    return 0;
}
