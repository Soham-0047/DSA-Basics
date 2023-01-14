#include<iostream>
 
using namespace std;
 
//Check the number is present or not in array

bool present(int *p,int n,int x)
{

    if(n<=0) return 0;

    if(p[0] ==x) return true;

    return present(p+1,n-1,x);
    
}  

void print(int *p,int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }

    cout<<endl;
}
int main()
{
 int arr[] =  {8,12,6,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<present(arr,n,12)<<endl;
  return 0;
}