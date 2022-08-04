#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s1,s2; 
   vector <char> s;
    cin>> s1;
    cin>> s2;
    int count =0;
    for(int i=s1.length()-1; i >=0; i--){
       s.push_back(s1[i]);
    }
     for(int i=0; i< s2.length(); i++){
         if (s2[i] != s[i]){
              cout<<"NO";
              break;
         }     
         else
           count++;
     }
   if(count == s2.length())   
    cout<<"YES";
    
      return 0;
}