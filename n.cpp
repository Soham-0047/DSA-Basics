#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
 string s ="123334";
 cout<<stoi(s)<<endl;
 cout<<endl;
 s = stoi(s);
 int k;
 int m = INT_MIN;
 for(int i=0;i<6;i++){
    if(s[i] == 3){
        k++;
    }
    if(s[i] <s[i+1]){
        m = s[i+1];
    }
 }
 cout<<k<<endl;
 cout<<typeid(s).name()<<endl;
 cout<<m<<endl;
 return 0;
}