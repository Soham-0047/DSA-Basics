#include<iostream>
 
using namespace std;

void print(int *p,int n){
   for(int i=0;i<n;i++){
    cout<<p[i]<<" ";

 } 
 cout<<endl;
}

//Iterative way

int sum_array(int *p,int n){
   int sum =0;

   for(int i=0;i<n;i++){
      sum += p[i];
   }

   return sum;
}

//Recursive way

int sum_array_recur(int *p,int n){

   if(n <=0) return 0;

   
   
   return  (sum_array_recur(p,n-1) + p[n-1]); 
}


int main()
{


 int arr[] = {4,2,6,2,7};
 int n = sizeof(arr)/sizeof(arr[0]);
 print(arr,n);
 cout<<sum_array(arr,n)<<" "<<endl;
 cout<<sum_array_recur(arr,n)<<" "<<endl;
 return 0;
}