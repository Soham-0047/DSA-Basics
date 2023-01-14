#include<iostream>
 
using namespace std;

int fact(int n){

    if(n<=0) return 1; //This is the base case for the factorial

    return n*fact(n-1);
}

//Fibonacci  Series                      

int fibo(int n){
    if(n<=0) return 1;
    cout<<fibo(n-1)<<fibo(n-2)<<endl;
    return fibo(n-1) + fibo(n-2);
}

int main()
{
 int n;
 cin>>n;
 cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;
 cout<<"Fibonacci series sum "<<" is "<<fibo(n)<<endl;
 
 return 0;
}