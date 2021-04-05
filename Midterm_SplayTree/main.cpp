// Author: Elias Mann
// Code Modified from At: https://github.com/Bibeknam/algorithmtutorprograms/blob/master/data-structures/splay-trees/SplayTree.cpp
#include "SplayTree.h"

//test

int main() {
    SplayTree bst;
    bst.insert(33);
    bst.insert(44);
    bst.insert(67);
    bst.insert(5);
    bst.insert(89);
    bst.insert(41);
    bst.insert(98);
    bst.insert(1);
    bst.prettyPrint();
    bst.searchTree(33);
    bst.searchTree(44);
    bst.prettyPrint();
    bst.deleteNode(89);
    bst.deleteNode(67);
    bst.deleteNode(41);
    bst.deleteNode(5);
    bst.prettyPrint();
    bst.deleteNode(98);
    bst.deleteNode(1);
    bst.deleteNode(44);
    bst.deleteNode(33);
    bst.prettyPrint();
    return 0;
}