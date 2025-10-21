#include<iostream>
using namespace std;


int main(){
    int i=8;
    int *p = &i;
    cout<<p<<endl; //it will get the address
    cout<<*p<<endl; //it will get the value at the address
    // In compile time the symbol table wil be created.
    double dt =  2344.344;
    double  *dt1  =  &dt;
    cout<<*dt1<<" "<<endl;
    return 0;
}