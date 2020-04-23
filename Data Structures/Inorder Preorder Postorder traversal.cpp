/*Inorder preorder and postorder traversal*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int x;
    struct TreeNode* L;
    struct TreeNode* R;
};

typedef struct TreeNode TreeNode;
TreeNode* newNode(int _x) {
    TreeNode* node = (TreeNode*) malloc(sizeof(TreeNode));
    node->x = _x;
    node->L = node->R = NULL;
    return node;
}

TreeNode* insert(TreeNode* node, int val) {
    if (node == NULL) 
        return newNode(val);
    if (val <= node -> x) 
        node -> L = insert(node -> L, val);
    else 
        node -> R = insert(node->R, val);
    return node;
}

void preorder(TreeNode* Root){
    if(Root==NULL)
        return ;
    cout << Root -> x << " ";
    preorder(Root->L);
    preorder(Root->R);
}

void inorder(TreeNode* Root){
    if(Root==NULL)
        return ;
    inorder(Root->L);
        cout << Root -> x << " ";
    inorder(Root->R);
}

void postorder(TreeNode* Root){
    if(Root==NULL) 
        return ;    
    postorder(Root->L);
    postorder(Root->R);
    cout << Root -> x << " ";
}

int main() {
    int val, N; 
    cin >> N;
    TreeNode* Root = NULL;
    for (int i = 1; i <= N; i++) {
        cin >> val;
        Root = insert(Root, val);
    }
    preorder(Root);
    cout << endl;
    inorder(Root);
    cout << endl;
    postorder(Root);
}