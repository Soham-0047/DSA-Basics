#include<bits/stdc++.h>
 
using namespace std;
 class node{
    public:
    int data;
    node *next;
    //define constructor
    node(int data){
      this->data = data;
      next = NULL;
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

 //Now taking use input for creating the linked list

 void take_input(node *head){

  int data;
  node *n1 = NULL;
  node *n2 =  NULL;

  while (data != 0)
  { 
    cin>>data;
   n1 = new node(data);

    n1->next = NULL;

    if(head ==NULL){
      head = n2 = n1;
    }
    else{
      n2->next = n1;
      n2 = n1;
    }

  }

  printlist(head);
  
 }

 //insertion,deletion in linked list
 void insert_b(node *head,int data){
  node *n1 = new node(data);
  
  if(head == NULL){
    head = n1;
  }
  n1->next = head;
  head = n1;

  printlist(head);

 }

  void insert_p(node *head,int i,int data){
    
    node *n1 = new node(data);
    node *n2 = head;
      int c =1;
    while(c != i-1){
      n2 = n2->next;
      c++;
    }
    n1->next = n2->next;
    n2->next = n1;
    n2 = n1;

  printlist(head);

  }
int main()
{  
  //Static node creation
  //  node n1(20);
  //  node n2(56);
  //  n1.next = &n2;
  
  // node *head = &n1;
  // cout<<head->data<<" "<<n1.data<<" "<<n2.data<<endl;

  //Dynamic node creation
 
  node *n3 = new node(120);
  node *head = n3;
  node *n4  = new node (33);
  node *n5 = new node(89);


  n3->next = n4;
  n4->next = n5;
  n5->next = NULL;
  printlist(head);

  // node *head = NULL;
  // take_input(head);

  insert_b(head,230);
  insert_p(head,3,4000);



 return 0;
}