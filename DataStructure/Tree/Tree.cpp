#include <stdio.h>
#include <iostream>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* right;
    TreeNode* left;
    
    TreeNode(int value){
        data = value;
        left = right = NULL;
    }
    
};

class BST{
public:
    TreeNode* root;
    
    BST(){ root = NULL; }
    
    TreeNode* Insert(TreeNode* r, int item){
        if (r ==NULL) {
            TreeNode* newNode = new TreeNode(item);
            r = newNode;
        }else if (item < r-> data){
            r -> left = Insert(r->left, item);
        }else{
            r -> right = Insert(r->right, item);
        }
        return r;
    }
    
    void Insert(int item){
        root = Insert(root, item);
    }
    
    void PreOrder(TreeNode* r) // Root - Left - Right.
    {
        if (r == NULL) {
            return;
        }else{
            cout<< r->data << "\t";
            PreOrder(r->left);
            PreOrder(r->right);
        }
    }
    void InOrder(TreeNode* r) // Left - Root - Right.
    {
        if (r == NULL) {
            return;
        }else{
            InOrder(r->left);
            cout<< r->data << "\t";
            InOrder(r->right);
        }
    }

    void PostOrder(TreeNode* r) // Left - Right - Root.
    {
        if (r == NULL) {
            return;
        }else{
            PreOrder(r->left);
            PreOrder(r->right);
            cout<< r->data << "\t";
        }
    }

};
