#include<bits/stdc++.h>
 
using namespace std;

//if the tree is balanced 
//left < root <= right

class bst {

    public:
    int data;
    bst *left;
    bst *right;
    bst(int value){
        this->data = value;
        this->left = this->right = NULL;
    }
    
};


void print_btw_range(bst *root,int l,int r){

    if(root == NULL) return;

    if(root->data >= l && root->data <= r){
        cout<<root->data<<endl;
    }
    if(root->data >l){
        print_btw_range(root->left,l,r);
    }
    if(root->data <= r){
        print_btw_range(root->right,l,r);
    }
}

int maximum(bst *root){

    if(root == NULL){
        return INT_MIN;
    }

    return max(root->data, max(maximum(root->left),maximum(root->right)));

}
int minimum(bst *root){
    if(root ==NULL){
        return INT_MAX;
    }
    return min(root->data, min(minimum(root->left),minimum(root->right)));

}
bool check_BST(bst *root){
    if(root == NULL) return true;
    //Find the max of left and minimum of right
    int maxl = maximum(root->left);
    int minr = minimum(root->right);

    return ((root->data > maxl) && (root->data <= minr) && check_BST(root->left) && check_BST(root->right));

}
void print(bst*root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" :";
    if(root->left !=NULL){

        cout<<" L "<<root->left->data<<" ";
    }
    if(root->right !=NULL){

        cout<<" R "<<root->right->data<<" ";
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}

int main()
{

    bst *root = new bst(12);
    bst *n1 = new bst(5);
    bst *n1l =  new bst(3);
    bst *n1r = new bst(7);
    bst *n2 = new bst(20);
    bst *n2l = new bst(15);
    bst *n2r = new bst(25);
    root->left = n1;
    root->left->left = n1l;
    root->left->right  = n1r;

    root->right = n2;
    root->right->left = n2l;
    root->right->right = n2r;

    print(root);

    //print between two values or range 
    print_btw_range(root,4,13);

    cout<<"Bst -> "<<check_BST(root)<<endl;

 
 
 return 0;
}