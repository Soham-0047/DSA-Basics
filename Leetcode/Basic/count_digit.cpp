#include<bits/stdc++.h>
using namespace std;

int count_number(int n){
    if(n<=0) return 0;
    int count=0;
    do{
        n = n/10;
        count++;
    } while(n != 0);

    return count;
}



int main(){
    int n = count_number(342323);
    cout<<n<<endl;
    return 0;
}