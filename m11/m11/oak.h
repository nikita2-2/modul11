#ifndef OAK_H
#define OAK_H

#include "tree.h"

class Oak : public Tree {
public:
    Oak();
    void wind() const override;
};

#endif // OAK_H
