#ifndef MAPLE_H
#define MAPLE_H

#include "tree.h"

class Maple : public Tree {
public:
    Maple();
    void wind() const override;
};

#endif // MAPLE_H
