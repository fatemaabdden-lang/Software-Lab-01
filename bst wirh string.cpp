#include<iostream>
using namespace std;

struct Node{
string data;
Node *left;
Node *right;



 Node(string value){
     data = value;
     left= nullptr;
     right = nullptr;

 }
};

 void inorder(Node *root){
     if(root){
        inorder(root->left);
        cout<< root->data;
        inorder(root->right);

     }

 }

 void preorder(Node *root){
     if(root){

    cout<< root->data;
    preorder(root->left);
    preorder(root->right);
     }

 }

 int main(){
     Node *root= new Node ("fatema");
     root->left = new Node ("abdden");
     root->right = new Node ("galib");

     cout<<"Root:" <<root->data<<endl;
     cout<< "Left Node:"<< root->left->data<<endl;
     cout<< "Right Node:"<<root->right->data<<endl;

     cout<< "Inorder:"<<endl;
     inorder(root);
     cout<<endl;

     cout<< "Preorder:"<<endl;
     preorder(root);

     return 0;


 }
