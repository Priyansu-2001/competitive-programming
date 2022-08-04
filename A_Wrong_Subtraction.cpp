#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    long long n,k; 
    cin>>n>>k;
    long long count; 
     for(long long i=1; i<=k; i++){
        count = n % 10;
        if(count == 0)
          n /= 10;
        else 
        n -= 1;
     }
    
    cout<<n;
      return 0;
}