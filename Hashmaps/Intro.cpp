#include<bits/stdc++.h>
 
using namespace std;

vector<char> count_char(string s){
    int n = s.length();
    sort(s.begin(),s.end());
    vector<char>st;
    vector<char>c(n,-1);
    for(int i=0;i<n;i++){
      if(s[i] ==  s[i+1]){
        c[i] = s[i];
      }
    }

    for(int i=0;i<n;i++){
        if(c[i] !=0 || c[i] != -1){
            st.push_back(c[i]);
        }
       
    }
return st;
}
int main()
{
 
//  cout<<"Highest occuring element";
 string n = "bvellpopdubb";
//  vector<char> d = count_char(n);
//  for(auto l:d){
//     cout<<l<<" ";
//  }
//  cout<<d.size()<<endl;


//  char a[] = "AabBcCzZ";
//  int n1 =  sizeof(a)/sizeof(a[0]);
//  for(int i=0;i<n1;i++){
//     cout<<a[i]<<" ";
//     if(a[i] != 0){
//         cout<<(int)a[i]<<" ";
//     }
//  }
    
    char t1;
    for(char t = 'A',t1 = 'a';t<='Z' && t1<='z';t++,t1++){
        cout<<t<<" ";
        cout<<(int)t<<" ";
        cout<<" | ";
        cout<<t1<<" ";
        cout<<(int)t1<<" ";
        cout<<endl;
    }
 return 0;
}