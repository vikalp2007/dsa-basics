#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data=value;
        Node* left=NULL;
        Node* right = NULL;
    }
};

void preOrder(Node* root){
    if (root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    
}



int main(){

    
    Node* root= new Node(1);
    root->left=new Node(2);

    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    preOrder(root);

    return 0;
}