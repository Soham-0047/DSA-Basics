#include<bits/stdc++.h>
 
using namespace std;

class bst{

public:


};

int main()
{
 unordered_map<string,int>mp;

 //insert element in  this unordered_map
 pair<string,int>p("sok",1); //create pair and then add it there

 mp.insert(p);
 mp["ele"] = 2;
 cout<<mp["sok"]<<endl;
// cout<<mp.at("s")<<endl; //* Get the exception

cout<<mp["koty"]<<endl;
cout<<mp["naakeo"]<<endl;

//? Check for key present

cout<<mp.count("ele")<<endl; //* return 1 or 0
cout<<mp.size()<<endl;
cout<<mp.erase("koty")<<endl;
cout<<mp.size()<<endl;


 
 
 return 0;
}