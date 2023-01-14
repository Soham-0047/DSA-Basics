#include<iostream>
using namespace std;

int recurmul(int m,int n){

    //Base case
    if(n==0) return 0;

    
    return (m + recurmul(m,n-1));

}

//This is the another method to do this recursively

int recur(int m,int n){

    if(n==0) return 0;


    int ans = m*(n-1);

    return m+ans;
}
int main(){

   

    cout<<recurmul(2,3)<<endl;

    cout<<recur(5,4)<<endl;
    
    return 0;
}
