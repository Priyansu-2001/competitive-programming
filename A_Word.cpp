#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    string s; 
    cin>>s;
     
    int count = 0;
    int add = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i]<97)
          count++;
          else
          add++;
    }
    if(count > add){
        for(int i=0; i<s.length(); i++)
        {
             if(s[i]>=97)
               s[i] -= 32;
        }
         
    }
    else{
        for(int i=0; i<s.length(); i++)
        {
             if(s[i]<97)
             s[i] +=32;
        }
          
    }
      cout<<s; 

      return 0;
}