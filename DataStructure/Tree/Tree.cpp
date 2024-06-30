#include <stdio.h>
#include <iostream>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* right;
    TreeNode* left;
    
    TreeNode(){
        data = 0;
        left = right = NULL;
    }
    
};

class BST{
public:
    TreeNode* root;
    
    BST(){ root = NULL; }
    
    
};
