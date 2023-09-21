#include<iostream>
using namespace std;

//1  0  4   0  

//Count 0 for the above number
//base case 
//* smaller problem 
//* basic calculation
//Occurence of k digits in the number n
//n%10 == k , 1+f(n/10,k) return 
//smaller problem calcul;ation

//Time complexity O(logn)
int count_num(int n,int k){


    if(n==0) return 0;  //base case

    if(n%10 == k){
        return 1+count_num(n/10,k);

    }

    return count_num(n/10,k);

}

int main(){



    int n=10005600;
    int k =0;
    int n1 = 397934597;

    cout<<count_num(n,k)<<endl;
    cout<<count_num(n1,9)<<endl;
    

    return 0;

}
