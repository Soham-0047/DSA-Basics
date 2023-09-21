#include<bits/stdc++.h>
 
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

 void printlist(node *head){

  node *tmp = head;

  while(tmp != NULL){
    cout<<tmp->data<<" ";
    tmp = tmp->next;
  }

  cout<<endl;
 }

 void odd_even(node *head){
    node *n1;
    node *eh, *et, *oh, *ot;
    if(head == NULL) return;

    if((head->data)%2 ==0){
        eh = et = head;
        
    }
    else{
        oh=ot = head;
    }
    while(et->next != NULL ) {
        et = et->next;
       if((et->data)%2==0){
        eh->next = et;
        
       
       } 
        
    }

    printlist(eh);

 }
int main()
{
    node *n1 = new node(12);
    node *head = n1;
    node *n2 = new node(20);
    node *n3 = new node(55);
    node *n4 = new node(45);
    node *n5 = new node(36);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;
   int u = ((head->data)%2 )==0?1:0;
   cout<<u<<endl;
    printlist(head);
    odd_even(head);

 
 return 0;
}