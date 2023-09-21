#include<iostream>
 
using namespace std;
 
//Recursion with strings
//Finding length of string (Char Array)
//Remove all the X from the string
// abcxbx



int length(char p[]){

if(p[0] == '\0'){
    return 0;
}

int sl = length(p+1);

return sl+1;
}



void rem(char p[]){

  if(p[0] == '\0'){
    return;

  }


    if(p[0] != 'x'){
      rem(p+1);
    }
    else{
        int i=1;
        for(;p[i]!='\0';i++){
          p[i-1] = p[i];
        }

        p[i-1] = p[i];
        rem(p);
    }

}



int main()
{
  char arr[50];
  cin>>arr;
  int len = length(arr);

    cout<<len<<endl;

    rem(arr);
    cout<<"After removing x "<<arr<<endl;

    





  
 return 0;
}