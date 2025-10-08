#include<bits/stdc++.h>
 
using namespace std;
 class bst{

    public:
    int data;
    bst *left;
    bst *right;

    bst(int value){
        this->data = value;
        this->left = this->right =NULL;
    }
 };

 bst* arr_bst(vector<int>&p,int left,int right){
    
    if(left > right) return NULL;
    
    sort(p.begin(),p.end());
    bst *root;
    
   
        int mid = left + (right - left)/2;

        root = new bst(p[mid]);

    
        root->left = arr_bst(p,left,mid-1);
        
      
    
      
        root->right = arr_bst(p,mid+1,right);
     

    return root;
 }

 //* path to k data  node to the root

 vector<int> k_root(bst *root,int value){

    if(root == NULL) return {0};

    if(root->data  == value){
        vector<int>st;
        st.push_back(root->data);
        return st;
    }

    vector<int> left =  k_root(root->left,value);

    if(!left.empty()){
        left.push_back(root->data);
        return left;
    }

    vector<int>right = k_root(root->right,value);

    if(!right.empty()){
        right.push_back(root->data);
        return right;
    }
   
 }

vector<int> root_path_2(bst *root,int value){
    
}
vector<int> sma(int n){
    vector<int>l;
    while(n !=0){
        l.push_back(n);
        n--;
    }
    return l;
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
 
 vector<int>p = {6,23,243,2,12,4,64,90};

    int n = p.size();
 bst *root = arr_bst(p,0,n-1);
 print(root);

vector<int>k = k_root(root,64);
for(auto o:k){
    cout<<o<<" ";
}


 return 0;
}