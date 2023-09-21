#include<iostream>
using namespace std;

int unique_fun(int *p,int n){

    int *arr;
    int i,j;
    for(i=0;i<n;i++){
        arr[i] = 0;
    }

static int count =0 ;
    for(i=0;i<n;i++){
        
        for(j=i+1;j<n;j++){
        
            if(p[i] != p[j]){
                arr[i] = p[j];
                count++;
            }
            else{
                count++;
            }

        }
    }

    // for(i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    return count;
}



int main(){

    int arr[] = {2,3,3,5,6,7};

    int n = sizeof(arr[0])/sizeof(arr);
    cout<<unique_fun(arr,n);
    




    return 0;
}