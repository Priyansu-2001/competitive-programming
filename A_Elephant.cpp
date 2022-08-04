#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int  x; 
    cin>>x;
     
    int count = 0;

     while(x)  {
           if(x==1 || x==2 || x==3 || x==4 || x== 5){
              count++;
              cout<< count;
              return 0;
           }
           x = x-5;
           count++;
     }

      return 0;
}