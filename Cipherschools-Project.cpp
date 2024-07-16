Project Code:

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = NULL;
    }

    Node* insert(Node* node, int val) {
        if (node == NULL) {
            return new Node(val);
        }
        if (val < node->data) {
            node->left = insert(node->left, val);
        } else if (val > node->data) {
            node->right = insert(node->right, val);
        }
        return node;
    }

    Node* search(Node* node, int val) {
        if (node == NULL || node->data == val) {
            return node;
        }
        if (val < node->data) {
            return search(node->left, val);
        }
        return search(node->right, val);
    }

    Node* findMin(Node* node) {
        while (node && node->left != NULL) {
            node = node->left;
        }
        return node;
    }

    Node* deleteNode(Node* root, int val) {
        if (root == NULL) return root;

        if (val < root->data) {
            root->left = deleteNode(root->left, val);
        } else if (val > root->data) {
            root->right = deleteNode(root->right, val);
        } else {
            if (root->left == NULL) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

    void inOrder(Node* node) {
        if (node == NULL) return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    void preOrder(Node* node) {
        if (node == NULL) return;
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void postOrder(Node* node) {
        if (node == NULL) return;
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
};

int main() {
    BST tree;
    tree.root = tree.insert(tree.root, 55);  // Inserting 55
    tree.insert(tree.root, 30);              // Inserting 30
    tree.insert(tree.root, 25);              // Inserting 25
    tree.insert(tree.root, 35);              // Inserting 35
    tree.insert(tree.root, 70);              // Inserting 70
    tree.insert(tree.root, 60);              // Inserting 60
    tree.insert(tree.root, 85);              // Inserting 85

    cout << "InOrder traversal: ";
    tree.inOrder(tree.root);
    cout << endl;

    cout << "PreOrder traversal: ";
    tree.preOrder(tree.root);
    cout << endl;

    cout << "PostOrder traversal: ";
    tree.postOrder(tree.root);
    cout << endl;

    cout << "Search for 30: " << (tree.search(tree.root, 30) != NULL ? "Found" : "Not Found") << endl;

    cout << "Delete 25\n";
    tree.deleteNode(tree.root, 25);
    cout << "InOrder traversal after deletion: ";
    tree.inOrder(tree.root);
    cout << endl;

    return 0;
}

Output:
InOrder traversal: 25 30 35 55 60 70 85 
PreOrder traversal: 55 30 25 35 70 60 85
PostOrder traversal: 25 35 30 60 85 70 55 
Search for 30: Found
Delete 25
InOrder traversal after deletion: 30 35 55 60 70 85

=== Code Execution Successful ===


Project Document:
	
Programming Language: C++
Development Environment: Any C++ compatible IDE (e.g., Visual Studio, DevCpp)
Project Details: Overview,Features and Functionalities,Usage
Project Title: Implementation of Binary search tree(BST)

This program demonstrates a basic implementation of a Binary Search Tree (BST) in C++.
Here's a summary of the key components and functionalities:Node Structure: Represents a node in the tree with data, left, and right pointers.BST Class: Manages the root of the tree and provides methods for:Inserting a node (insert)Searching for a node (search)Finding the minimum value node (findMin)Deleting a node (deleteNode)Performing in-order (inOrder), pre-order (preOrder), and post-order (postOrder) traversals.
Main Function:Inserts new values into the BST (55, 30, 25, 35, 70, 60, 85).
Prints the tree in in-order, pre-order, and post-order traversals.
Searches for the value 30 in the tree.
Deletes the node with value 25 and prints the in-order traversal after deletion.

Time Complexity:
Average Case : O(log n) for insertion, deletion, and search operations.
Worst Case   : O(n) for insertion, deletion, and search operations in an unbalanced BST.

Usage:
The main function demonstrates the usage of the BST class by performing a series of insertions, a search, a deletion, and different types of traversals. The following operations are performed.


