#ifndef BIRCH_H
#define BIRCH_H

#include "tree.h"

class Birch : public Tree {
public:
    Birch();
    void wind() const override;
};

#endif // BIRCH_H
