#include<bits/stdc++.h>
#include<math.h>
using namespace std;



string football(string &s){
    
    
    int count = 0;
    for(int i=0; i<s.size()-1;i++){
         if(s[i] == s[i+1]){
             count++;
              if(count ==6) {
                  return "YES";
                   break;
              }              
         }
         else
           count = 0;      
    } 
    return "NO";       
    
}
int main(){
    string s;
    cin>>s;
    string result = football(s);
    cout<< result;
    return 0;
}