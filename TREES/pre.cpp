#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        this->data=value;
        Node* left=NULL;
        Node* right = NULL;
    }
};

void preOrder(Node* root, vector<int> &ans){
    if (root==NULL)
    {
        return;
    }

    ans.push_back(root->data);
    preOrder(root->left, ans);
    preOrder(root->right, ans);

    
    
}

vector<int> preOrderTraversal(Node* root){
    vector<int> ans;
    preOrder(root, ans);
    return ans;
}



int main(){
    

    
    Node* root= new Node(1);
    root->left=new Node(2);

    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    preOrderTraversal(root);
    return 0;


    
}