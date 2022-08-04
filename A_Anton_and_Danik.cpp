#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    string s; 
    cin>> s;
    int add=0;
    int count =0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A')
          count++;
        else
          add++;
    }
    if(add > count )
    cout<<"Danik";
    else if(add < count)
    cout<<"Anton";
    else
    cout<<"Friendship";
      return 0;
}