#include<bits/stdc++.h>
 
using namespace std;

template<typename t>

class bt{

    public:
    t data;
    bt *left;
    bt *right;

    bt(int value){
        this->data = value;
        left = NULL;
        right = NULL;
    }

    ~bt(){
        delete left;
        delete right;
    }

};

void print(bt<int>*root){
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


//* Tak einput levelwise 

// bt<int>* takeinputlevelwise(){

     
// }

//Find out the number of nodes in tree

int nNodes(bt<int>*root){
    if(root == NULL) return 0;
    
    return 1 + nNodes(root->left) +  nNodes(root->right);

}
//Without using template we can 

bt<int>* input(){

    //check and take for the root element
    int r_data;
    cout<<"Data: "<<endl;
    cin>>r_data;
    if(r_data == -1) return NULL;
    bt<int>*root = new bt<int>(r_data);
    bt<int>*l =  input();
    bt<int>*r = input();

    root->left = l;
    root->right = r;

    return root;

}
int main()
{
  bt<int> *root =  new bt<int>(1);
  bt<int> *n1 =  new bt<int>(4);
  bt<int> *n2 =  new bt<int>(7);
  bt<int> *n3 = new bt<int>(2);
  bt<int> *n4 = new bt<int>(3);

    root->left = n1;
    root->right = n2;
    root->left->left = n3;
    root->left->right = n4;

//* TakeInput from User

// bt<int> *root = input();

    print(root);
    // delete root;

    cout<<"Number of Nodes "<<nNodes(root)<<endl;

 
 return 0;
}