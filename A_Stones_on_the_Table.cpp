#include<bits/stdc++.h>
using namespace std;

int main(){
    char prev, next;
    int n;
    cin>>n;
    int count =0;
    cin>> prev;
    
    for(int i=1; i<n; i++){
        cin>>next;
        if(prev == next)
          count++;  
          prev = next;       
    }
     cout<<count<<endl;
        
    return 0;
}