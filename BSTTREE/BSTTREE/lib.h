#pragma once
#include <iostream>
using namespace std;

typedef int info;
typedef struct BST* Node;

struct BST {
	info data;
	Node left;
	Node right;
};

Node createNode(info value);
Node insert(Node root, info value);
void inorder(Node root);
bool search(Node root, info key);
Node findMin(Node root);
Node deleteNode(Node root, info key);
Node cloneTree(Node root);
info countNodes(Node root);
info countLeafNodes(Node root);
info treeHeight(Node root);
info getLevel(Node root, info p, info level = 0);