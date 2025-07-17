#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <iostream>
using namespace std;

struct TreeNode{ // Creates a treenode
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val){
        data = val;
        left = right = NULL;
    } 
    
};

struct BinarySearchTree{  //Helps to create a Binary Search Tree
    //insert

    TreeNode *root = nullptr;
    TreeNode* ADD(int val, TreeNode *root){
        if(root==NULL)return new TreeNode(val);
        if(val < root->data){
            root->left = ADD(val, root->left);
        }
        else{
            root->right = ADD(val, root->right);
        }
        return root;
    }

    void Insert(int val){  //Helps to insert the value in tree
        root = ADD(val, root);
    }

    void PrintInorder(TreeNode *root){  //Helps to print the ascending order of the binary search tree
        if(root==nullptr)return;
        PrintInorder(root->left);
        cout << root->data <<" ";
        PrintInorder(root->right);
    }

    void Inorder(){ //Calls the PrintInorder function
        PrintInorder(root);
    }
};

#endif
