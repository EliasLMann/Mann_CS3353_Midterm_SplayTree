// Author: Elias Mann
// Code Modified from At: https://github.com/Bibeknam/algorithmtutorprograms/blob/master/data-structures/splay-trees/SplayTree.cpp

#ifndef MIDTERM_SPLAYTREE_SPLAYTREE_H
#define MIDTERM_SPLAYTREE_SPLAYTREE_H


#include <iostream>

using namespace std;

// data structure that represents a node in the tree
struct Node {
    int data; // holds the key
    Node *parent; // pointer to the parent
    Node *left; // pointer to left child
    Node *right; // pointer to right child
};

typedef Node *NodePtr;

// class SplayTree implements the operations in Splay tree
class SplayTree {
public:
    SplayTree();

    // Pre-Order traversal
    // Node->Left Subtree->Right Subtree
    void preorder();

    // In-Order traversal
    // Left Subtree -> Node -> Right Subtree
    void inorder();

    // Post-Order traversal
    // Left Subtree -> Right Subtree -> Node
    void postorder();

    // search the tree for the key k
    // and return the corresponding node
    NodePtr searchTree(int k);

    // find the node with the minimum key
    NodePtr minimum(NodePtr node);

    // find the node with the maximum key
    NodePtr maximum(NodePtr node);

    // find the successor of a given node
    NodePtr successor(NodePtr x);
    // find the predecessor of a given node
    NodePtr predecessor(NodePtr x);

    // insert the key to the tree in its appropriate position
    void insert(int key);

    NodePtr getRoot();

    // delete the node from the tree
    void deleteNode(int data);

    // print the tree structure on the screen
    void prettyPrint();

private:
    NodePtr root;

    void preOrderHelper(NodePtr node);
    void inOrderHelper(NodePtr node);

    void postOrderHelper(NodePtr node);

    NodePtr searchTreeHelper(NodePtr node, int key);

    void deleteNodeHelper(NodePtr node, int key);

    void printHelper(NodePtr root, string indent, bool last);

    // rotate left at node x
    void leftRotate(NodePtr x);

    // rotate right at node x
    void rightRotate(NodePtr x);

    // splaying
    void splay(NodePtr x);

    // joins two trees s and t
    NodePtr join(NodePtr s, NodePtr t);

    // splits the tree into s and t
    void split(NodePtr &x, NodePtr &s, NodePtr &t);

};


#endif //MIDTERM_SPLAYTREE_SPLAYTREE_H
