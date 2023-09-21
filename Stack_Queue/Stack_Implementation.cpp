#include<bits/stdc++.h>
 
using namespace std;

// Stsck is Linear and abstract

class stackf{
    int *p;
    int cap;
    int cur;

    //create a constructor
    public:
    stackf(int total_size){
        //create and allocate in the array
        p = new int[total_size];
        cap = total_size;
        cur =0;
    }

    //To check the stack is empty or not

    bool isEmpty(){
        
        return cur ==0;
    }

    void push(int val){
        if(cur == cap){
            return;
        }
        p[cur++] = val;
    }

    int pop(){
        if(isEmpty()) return INT_MIN;

        cur--;
        return p[cur];
    }


    int top(){
        if(isEmpty()) return INT_MIN;
        return p[cur-1];
    }
};

//Dynamic stack

class dys{

    int *a;
    int cap;
    int c;
    public:

    dys(){
        a = new int[2];
        cap = 2;
        c =0;

    }

    //define empty

    bool empty(){
        return c ==0;
    }

    void push_d(int data){

        if(c == cap){

            //create a new array
            int *newp = new int[2*cap];
            for(int i=0;i<cap;i++){
                newp[i] = a[i];
            }
            //double the capacity
            cap  *= 2;

            //delete the previous array
            delete [] a;

            //now point the newarray in previous array

            a =  newp;

        }


        a[++c] = data;
    }


    int pop(){
        if(empty()) return INT_MIN;

        c--;
      
        return a[c];
    }
};
int main()
{
 stackf s(6);
 s.push(45);
 s.push(90);
 s.push(112);
 cout<<s.pop()<<endl;
 cout<<s.top()<<endl;

 dys s1;
 s1.push_d(23);
 s1.push_d(27);
 s1.push_d(903);
 s1.push_d(123);

 cout<<s1.pop()<<endl;

 
 
 return 0;
}






























