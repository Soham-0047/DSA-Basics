#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
 queue<int>q;
 q.push(23);
 q.push(890);
 q.push(78);

 cout<<q.front()<<endl;
 cout<<q.empty()<<endl;
 q.pop();
 cout<<q.front()<<endl;
 q.pop();
 cout<<q.front()<<endl;

cout<<"/n Stack /n"<<endl;
 stack<int>s;
 s.push(345);
 s.push(890);
 s.push(65);
 cout<<s.top()<<endl;
 s.pop();
 cout<<s.empty()<<endl;
 cout<<s.top()<<endl;
 
 return 0;
}