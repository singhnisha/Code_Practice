#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insertBST(Node *root, int val){
    // for empty root node, or any left/right empty node addition
    if(root==NULL)
        return new Node(val);

    if(val < root->data){
        root->left = insertBST(root->left,val);
    }
    else{
        // val > root->right
        root->right = insertBST(root->right,val);
    }
    return root;
}

void inorder(Node *root){
    if(root==NULL)
        return;
    //cout << "print BST array inorder\n";
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    Node *root = NULL;
    insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);

    inorder(root);
    cout << endl;
    return 0;
}