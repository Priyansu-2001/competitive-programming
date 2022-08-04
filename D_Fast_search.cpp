#include<bits/stdc++.h>
using namespace std;
int main(){

ios::sync_with_stdio(false);
int n,k;
cin>> n>>k;
vector<int>a(n);
for (int i = 0; i < n; i++)
{
   cin>>a[i]; 
}

for (int i = 0; i < k; i++){
int l,r;
 cin>> l>>r; 

while(r > l){
   int m = (l+r)/2;
   if(a[m]>=x){
       r = m;
   }
   else
    l= m;
}
cout<<r+1<<"\n";
}
return 0;
}
