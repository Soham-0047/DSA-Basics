#include<iostream>
#include<math.h>
using namespace std;

/*
Geomatric section
1/2+ 1/2^2 + 1/2^3 + 1/2^4 + .... + 1/2^k


*/
double sum(int n){

    if(n==0) return 1;

    double st =  1/pow(2,n) + sum(n-1);

    return st;
    
}


int main(){

    int n=7;
    cout<<sum(n)<<" is the geomatric sum of "<<n<<" numbers"<<endl;



    return 0;

}