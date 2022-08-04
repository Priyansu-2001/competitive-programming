#include<bits/stdc++.h>
using namespace std;
int main(){

ios::sync_with_stdio(false);
int n,k;
cin>> n>>k;
vector<int>a(n);
for (int i = 0; i < n; i++){
 cin>>a[i]; 
}
for (int i = 0; i < k; i++){
int x;
 cin>> x; 
int l = -1;
int r = n;
while(r >l+ l){
   int m = (l+r)/2;
   if(a[m]<x){
       l =m;
   }
   else{
    r= m;
   }
}
if(r<n && a[r]==x){
    cout<<"YES\n";
}
else{
cout<<"NO\n";
}
}
return 0;
}




