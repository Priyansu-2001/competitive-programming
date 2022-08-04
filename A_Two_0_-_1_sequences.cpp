#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
          int n,m;
          cin>>n>>m;
          string a,b;
          for(int i=0; i<n; i++){
            cin>>a[i];
          }
          for(int i=0; i<m; i++){
            cin>>b[i];
       }
        for(int i=0; i<n; i++){
            if(a[i]>a[i+1])
            int t;
              t = a[i+1];
              a[i+1] = a[i];
              a[i] = t;

        }


       if(a == b)
       cout<< "YES"<<endl;
       else
        cout<<"NO"<<endl;

    }
   
   

}