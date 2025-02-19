#include "lib.h"

Node createNode(info value) //Tao Node 
{
	Node newNode = new BST();
	newNode->data = value;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node insert(Node root, info value)// Them Gia Tri Vao Cay
{
	if (root == NULL) return createNode(value);
	if (value < root->data) root->left = insert(root->left, value);
	else if (value > root->data) root->right = insert(root->right, value);
	return root;
}

void inorder(Node root) //Inorder (LNR) Xuat Theo Thu Tu Tang Dan
{
	if (root != NULL)
	{
		inorder(root->left);
		cout << root->data << "\t";
		inorder(root->right);
	}
}

bool search(Node root, info key) //Tim Kiem Phan Tu Trong Cay
{
	if (root == NULL) return false;
	if (root->data == key) return true;
	if (root->data > key) return search(root->right, key);
	return search(root->left, key);
}

Node findMin(Node root)//Tim Phan Tu Nho Nhat
{
	while (root->left != NULL) root = root->left;
	return root;
}
Node deleteNode(Node root, info key)//Xoa Phan Tu Trong Cay
{
	if (root == NULL) return root;
	if (key < root->data) root->left = deleteNode(root->left, key);
	else if (key > root->data) root->right = deleteNode(root->right, key);
	else {
		if (root->left == NULL) return root->right;
		if (root->right == NULL) return root->left;
		Node temp = findMin(root->right);
		root->data = temp->data;
		root->right = deleteNode(root->right, temp->data);
	}
	return root;
}

Node cloneTree(Node root) //Preorder (NLR) Dung Sao Chep Cay
{
	if (root == NULL) return NULL;
	Node newNode = new BST();
	newNode->data = root->data;
	newNode->left = cloneTree(root->left);
	newNode->right = cloneTree(root->right);
	return newNode;
}

void deleteTree(Node& root) //Postorder (LRN) Dung De Xoa Cay
{
	if (root == NULL) return;
	deleteTree(root->left);
	deleteTree(root->right);
	delete root;
	root = NULL;
}

info countNodes(Node root)//Dem Node Trong Cay
{
	if (root == NULL) return 0;
	return 1 + countNodes(root->left) + countNodes(root->right);
}

info countLeafNodes(Node root)//Dem Node La Trong Cay
{
	if (root == NULL) return 0;
	if (root->left == NULL && root->right == NULL) return 1;
	return countLeafNodes(root->left) + countLeafNodes(root->right);
}

info treeHeight(Node root) //Tinh Chieu Cao Cua Cay 
{
	if (root == NULL) return -1;
	info leftHeight = treeHeight(root->left);
	info rightHeight = treeHeight(root->right);
	return leftHeight > rightHeight ? leftHeight +1 : rightHeight + 1;
}

info getLevel(Node root, info p, info level = 0)//Tim Muc Node P Trong Cay
{
	if (root == NULL) return -1; 
	if (root->data == p) return level; 
	if (p < root->data)
		return getLevel(root->left, p, level + 1);
	else
		return getLevel(root->right, p, level + 1);
}

info getLevel(Node root, info target, info level = 0) 
{
	if (root == NULL) return -1;
	if (root->data == target) return level;
	info leftLevel = getLevel(root->left, target, level + 1);
	if (leftLevel != -1) return leftLevel;
	return getLevel(root->right, target, level + 1);
}

/*
info getLevel(Node root, info target, info level = 0)
{
    if (root == NULL) return -1;
    if (root->data == target) return level;
    inFO leftLevel = getLevel(root->left, target, level + 1);
    return (leftLevel != -1) ? leftLevel : getLevel(root->right, target, level + 1);
}
*/