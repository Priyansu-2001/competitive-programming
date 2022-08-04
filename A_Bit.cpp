#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int X=0;
    while(n){
      cin>> s;
      if( s == "++X"|| s== "X++")
         X++;
     else
      X--;
    n--;
    } 
    cout<< X;
    }
   
   
