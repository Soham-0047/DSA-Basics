#include<bits/stdc++.h>
using namespace std;


// Problem Statement: This problem has 3 variations. They are stated below:

// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.

// In Pascal’s triangle, each number is the sum of the two numbers directly above it as shown in the figure below:

/*
1 2 3 4 5 6  7 8 9 10
        1
    1   2    1
  1   3    3    1
1   4   6     4   1
*/

// nCr = n! / r! * (n-r)!
// if row no 6 then col = 12

// Naive appraoch with nCr

long long fact(int n){

    // temp variable to calculate the sum
    long long tmp =1;
    for(int i=1;i<=n;i++) tmp *= i;

    return tmp;
}
long long nCr(int r,int c){
    
    return fact(r) / (fact(c)*fact(r-c));
}

// Optimal appraoch
/*
r=5,c =3;


*/
int main() {
 int r = 5;
 int c = 3;
//  vector<int> arr = {1,4,6,4,1};
// findelement in that particular pascal's triangle
cout<<nCr(r-1,c-1)<<endl;


}