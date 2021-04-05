// Author: Elias Mann
// Code Modified from: https://github.com/Bibeknam/algorithmtutorprograms/blob/master/data-structures/splay-trees/SplayTree.cpp
#include "SplayTree.h"

//Method that prints the splay tree and pre order traversal
void printTree(SplayTree &splayTree1) {
    cout << "Splay Tree Diagram:" << endl << endl;
    splayTree1.prettyPrint();
    //this will print a pre-order traversal of the tree
    cout << endl <<"Pre-Order Traversal:"<< endl;
    splayTree1.preorder();
}

int main() {

//==============================CREATING INITIAL TREE=======================================
    SplayTree splayTree1;
    splayTree1.insert(3);
    splayTree1.insert(39);
    splayTree1.insert(87);
    splayTree1.insert(7);
    splayTree1.insert(22);
    splayTree1.insert(42);
    splayTree1.insert(20);

    std::cout <<"In Splay Tree Diagrams, └──── denotes a right child and ├──── denotes a left child"<< std::endl << std::endl;
    //this will print out a diagram of the tree
    std::cout <<"INITIAL SPLAY TREE:" << std::endl << std::endl;
    printTree(splayTree1);

//==============================SPLAY TREE INSERTION TEST===================================
    splayTree1.insert(10);
    std::cout << std::endl << std::endl <<"AFTER INSERTING 10:"<< std::endl << std::endl;
    printTree(splayTree1);

//==============================SPLAY TREE SEARCH TEST===================================
    Node* testNode = splayTree1.searchTree(42);
    std::cout << std::endl << std::endl <<"AFTER SEARCHING FOR 42:"<< std::endl << std::endl;
    printTree(splayTree1);

//==============================SPLAY TREE DELETE TEST===================================
    splayTree1.deleteNode(22);
    std::cout << std::endl << std::endl <<"AFTER DELETING 22:"<< std::endl << std::endl;
    printTree(splayTree1);

    return 0;
}


