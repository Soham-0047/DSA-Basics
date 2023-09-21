#include<bits/stdc++.h>
 
using namespace std;

//if we want to use double,char instead of using int , then without repeatn the same process to create class again and again we will create a //* Template 

template<typename t>

class paire{

    t a;
    t b;

    public:

    void setx(t x){
        this->a = x;

    }
    t getx(){
        return a;
    }
    void sety(t y){
        this->b = y;
    }
    t gety(){
        return b;
    }


};
int main()
{
//  paire<int>l;

//  l.setx(56);
//  l.sety(78);
//  cout<<l.getx()<<" "<<l.gety()<<endl;

  paire<char>l;

 l.setx('e');
 l.sety('y');
 cout<<l.getx()<<" "<<l.gety()<<endl;
 
 return 0;
}