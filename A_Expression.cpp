#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int  a,b,c; 
    cin>>a;
    cin>>b;
    cin>>c;
    
    int e1 = a+b*c ;
    int e2 = a*b+c;
    int e3 = a*b*c;
    int e4 = a+b+c;
    int e5 = (a+b)*c ;
    int e6 = a*(b+c);
    int e7 = a+(b*c) ;
    int e8 = (a*b)+c;

     int arr[] = {e1 , e2, e3, e4, e5 ,e6, e7, e8};
   sort(arr ,arr+8);
   cout<< arr[7];
      return 0;
  
} 