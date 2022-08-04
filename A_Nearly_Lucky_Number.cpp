#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
    long long n; 
    cin>>n;
    long long count =0; 
     while(n >0){
        if(n % 10 == 7 || n % 10 ==4)
            count++;
            n /= 10;
     }
    if(count == 7 || count == 4 )
     cout<<"YES";
    else
    cout<<"NO";
      return 0;
}