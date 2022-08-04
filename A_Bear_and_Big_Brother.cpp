#include<bits/stdc++.h>
using namespace std;

int main(){

    int l,r;
    cin>>l>>r;
    int count =0;

    while(l<=r)
    {
        l *= 3;
        r *= 2;
        count++;    
    }
     cout<<count<<endl;
        
    return 0;
}