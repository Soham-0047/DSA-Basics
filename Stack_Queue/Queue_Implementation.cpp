#include<bits/stdc++.h>
 
using namespace std;

//* Queue  is FIFO opearion
// queue can be implemented using array and linked list
//! Enqueue, dequeue, front, delete, 

template<typename t>
class queuel{

    t *p;
    int li;
    int fi;
    int size;
    int cap;
    public:

    queuel(int n){

        p = new t[n];
        fi =-1;
        li = 0;
        size =0;
        cap =n;
    }

    int getSize(){
        return size;
    }

    bool isempty(){
        return size ==0;
    }


    void enqueue(t d){

        if(size == cap){

        //    return; 
        t *ndata = new int[2*cap];
        int j=0;
        for(int i=fi;i<cap;i++){
            ndata[j] = p[i];
            j++;
        }

        for(int k =0;k<li;k++){
            ndata[j] = p[k];
            j++;
        }

        delete[] p;

        p  = ndata;
        li = cap;
        cap *=2;
        } 

        p[li] = d;
     // find out the mod to maintain 
     // li++;
        li = (li+1) % cap;

        if(fi == -1) fi =0;

        size++;
    }

    t front(){
        if(isempty()) return 0;

        return p[fi];
    }

    t dequeue(){


        if(isempty()) return 0;

        t delement = p[fi];

        fi = (fi+1)%cap;
        size--;

    if(size ==0){
        fi =-1;
        li =0;
    }
        return delement;

    }
};
int main()
{
    queuel<int> q(3);

    q.enqueue(12);
    q.enqueue(2);
    q.enqueue(512);
    q.enqueue(1512);  
     // q.enqueue(12);
    cout<<q.front()<<endl;
    
    



 
 
 return 0;
}