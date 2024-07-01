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
//======================= () ==========================//
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
    //======================= () ==========================//
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
    //======================= () ==========================//
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
    //======================= () ==========================//
    void PostOrder(TreeNode* r) // Left - Right - Root.
    {
        if (r == NULL) {
            return;
        }else{
            PostOrder(r->left);
            PostOrder(r->right);
            cout<< r->data << "\t";
        
        }
        
    }
    //======================= () ==========================//
    TreeNode* Search(TreeNode* r, int key){
        if (r == NULL) {
            return NULL ;
        }else if (r-> data == key){
            return r;
        }else if (key < r->data ){
            return Search(r->left, key);
        }else{
            return Search(r->right, key);
        }
    }
    
    bool Search(int key){
        TreeNode* result = Search(root, key);
        if (result == NULL) {
            return false;
        }else{
            return true;
        }
    }
    
    //======================= () ==========================//
    TreeNode* FindMin(TreeNode* r){
        if (r == NULL) {
            return NULL;
        }else if (r->left == NULL){
            return r;
        }else{
            return FindMin(r->left);
        }
    }  
    
    //======================= () ==========================//
    TreeNode* FindMax(TreeNode* r){
        if (r == NULL) {
            return NULL;
        }else if (r->right == NULL){
            return r;
        }else{
            return FindMax(r->right );
        }
    }
    //======================= () ==========================//
    
    TreeNode* Delete(TreeNode* r , int key){
        if (r == NULL) {
            return 0;
        }
        if (key < r->data){
           r->left = Delete(r->left, key);
        }else if (key > r->data){
           r->right = Delete(r->right, key);
        }else{
            //1- Leaf Node.
            if (r->left == NULL && r->right == NULL) {
                r = NULL;
            }
            //2- has only one child in the left
            else if (r->left != NULL && r->right == NULL){
                r->data = r->left->data;
                delete r->left;
                r->left = NULL;
            }
            //2- has only one child in the right
            else if (r->left == NULL && r->right != NULL){
                r->data = r->right->data;
                delete r->right;
                r->right = NULL;
            }else{
//======================= Another Implementation:=============================
//                r->data = FindMax(r->left)->data;
//                Delete(r->left, FindMax(r->left)->data);
                
                TreeNode* max =FindMax(r->left);
                r->data = max->data;
                Delete(r->left, max->data);
            }
        }
        
        return r ;
    }
};
