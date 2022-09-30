#include<iostream> //Preproccessor director

#define  pi 3.14
using namespace std;

//inline used to copy the body of the functiion all over the program, readblity increase and compile time also increase.
//Caution: Best to use it inside 2-3 lines of the code

 inline int findmax(int a,int b,int c){ 
  
  return (a>=b)?((a>=c)?a:c):(b>=c)?b:c;
 }
 
int main()
{
//  int a=10;
//  int *p = &a;
//  cout<<p<<endl;
//  cout<<sizeof(p)<<endl;
//  cout<<*p<<endl;
//  a++;
//  cout<<*p<<endl;
//  cout<<p<<endl;
//  p++;
//  cout<<p<<endl; //Added 4bytes as integer type
//  int b=12;
//  int *q = &b;
//  cout<<q<<endl;
//  cout<<*q<<endl;

//Dynamic memory allocation
// int a1 = 12;
// int &y = a1;
// cout<<y<<endl;
// a1++;
// cout<<y<<endl;

//pre-allocation of memory
//Playing with heap and stack


//     int *a2 = new int;

//     *a2 = 23; 
//     cout<<"Value at the address "<<*a2<<endl;
//     cout<<"Address "<<a2<<endl;
    
//     int *arr =  new int[5];
//     for(int i=0;i<5;i++){
//         arr[i] = ((i+1)*2/2);
//     }
//     int j= 0;
//    while(j<5){
//     cout<<arr[j]<<" ";
//     j++;
//    }


    //First of all we have to allocate the memory for row pointer 
    //Wer can here take the user input also
    // int m,n;
    // cin>>m>>n;
  //   int **arr2  = new int*[5];
  //   for(int i=0;i<5;i++){

  //       //Now for each column allocate the memory

  //       arr2[i] =  new int[5];

  //       for(int j=0;j<5;j++){
  //               cin>>arr2[i][j];
  //       }
  //   }


    
  // for(int  i=0;i<5;i++){
  //   for(int j=0;j<5;j++){
  //       cout<<arr2[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }


  //       for(int i=0;i<5;i++){
  //           delete [] arr2[i];
  //       }
  //       delete [] arr2;


   
  // for(int  i=0;i<5;i++){
  //   for(int j=0;j<5;j++){
  //       cout<<arr2[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  //Use of macros in C++
  //💻 Define
  //💻 Global Variable



  cout<<2*pi*45<<endl;
  cout<<findmax(56,55,156)<<endl;

 return 0;
} 