#include<iostream>
using namespace std;

bool sortedornot(int *arr,int n){
    //Base case
    if(n == 0 || n == 1) return true;

    if(arr[0]>arr[1]) return false;

    bool store = sortedornot(arr+1,n-1);

    return store;
}

   

int main()
{
 int arr[] = {3,4,7,8,12};
 int arr1[] = {4,1,6,3,5};
 int n = sizeof(arr)/sizeof(arr[0]);
 int n1 = sizeof(arr1)/sizeof(arr1[0]);

 if(sortedornot(arr,n)==true){
    cout<<"The array is sorted"<<" \6" <<""<<endl;
 }
 else{
    cout<<"Array is not sorted"<<endl;
 }
 
 return 0;
}