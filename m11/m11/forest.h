
#include <vector>
#include "tree.h"

class Forest {
public:
    void addTree(Tree* tree);

    void wind() const;

    void printTreeCounts() const;

private:
    std::vector<Tree*> trees;
};


