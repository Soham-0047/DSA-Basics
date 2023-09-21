//Preorder ->  root->left->right
//postorder -> left->right -> root
//Inorder -> left -> root -> right

#include<bits/stdc++.h>

using namespace std;
template<typename t>

class bt{

    public:
    int data;
    bt *left;
    bt *right;

    bt(int value){
        this->data = value;
        this->left = NULL;
        this->right = NULL;

    }
    //destructor
    ~bt(){
        delete left;
        delete right;
    }
};

void preorder(bt<int>*root){

    if(root == NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(bt<int>*root){
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(bt<int>*root){
    if(root == NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

//find the height of tree

int height(bt<int>*root){
    if(root == NULL) return 0;

    return 1 + max(height(root->left),height(root->right));

}

int diameter(bt<int>*root){

    if(root == NULL) return 0;

    int o1 = height(root->left) +  height(root->right);

    int o2 = diameter(root->left);
    int o3 = diameter(root->right);


    return max(o1, max(o2,o3));

}

void print(bt<int>*root){
    if(root == NULL) return;

        cout<<root->data<<" ";

        if(root->left != NULL){
            cout<<"L "<<root->left->data<<" ";
        }
        if(root->right != NULL){
            cout<<"R "<<root->right->data<<" ";

        }
        cout<<endl;
        //repeat the 
        print(root->left);
        print(root->right);

}
int main()
{
    bt<int> *root = new bt<int>(23);
    bt<int> *n1 = new bt<int>(15);
    bt<int> *n2  = new bt<int>(18);
    bt<int> *n3  = new bt<int>(10);
    bt<int> *n4 = new bt<int>(7);

    root->left = n1;
    root->left->left = n3;
    root->left->right = n4;
    root->right = n2;

    // print(root);
    // preorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    // inorder(root);

    //diameter of a binary tree
    cout<<"Diameter "<<diameter(root)<<endl;
 return 0;
}