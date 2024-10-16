#include<iostream>
#include<queue>
using namespace std;

 class node{
    public:
    int data;
    node* left ;
    node* right;

    node(int d){
        left=NULL;
        right=NULL;
        data = d;
    }
};

node* buildTree(node* root) {
    cout<< "Enter the data : \n";
    int data;
    cin>>data;
    root = new node(data);

    if(data==-1) {
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<< "Enter data for inserting in right of "<<data<<endl ;
    root->right = buildTree(root->right);
    return root;
}


int main() {

    node* root = NULL;
    
    //creating a Tree =>
    root = buildTree(root);
}