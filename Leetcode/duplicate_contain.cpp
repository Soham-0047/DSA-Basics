#include<bits/stdc++.h>
using namespace std;

bool calculateDup(vector<int>&a){
    int n = a.size();
    if(n<=0) return false;

   for(int i=0;i<n;i++){
    // This can go out of Index, O(n^2) and space complexity O(1)
     for(int j=n;j>i;j--){ 
        if(a[i] == a[j]) return true;
    }
   }
   return false;
}
 
int main(){
    // vector<int>arr = {1,2,3,1};
    // bool val = calculateDup(arr);
    // cout<<val;
    // unordered_set to store the unique elements O(1), insert, erase/ find
    unordered_set<int> s;
    s.insert(23);
    s.insert(11);
    s.insert(67);
    s.erase(11);
    cout<<s.count(11)<<endl;
    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;
    // set will do the find, insert, 
    set<int>s1;
    s1.insert(2334);
    s1.insert(454);
    s1.insert(66);
    s1.insert(890);
    s1.erase(666);
    for(int i : s1){
        cout<<i<<" ";
    }

    cout<<endl;

    unordered_map<string,int>m;
    



    return 0;
}