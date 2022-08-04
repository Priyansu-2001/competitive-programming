#include<bits/stdc++.h>
#include<math.h>
using namespace std;

string football(string &s){  
    int count = 0;
    string k = "hello";
    int j=0;
    for(int i=0; i<s.size();i++){
        if(s[i] == k[j] ){
                   count++;
                   j++;
                   if(count ==5)
                   break;
        }
    }
         
    if(count ==5) 
         return "YES";
     else
         return "NO";       
    
}
int main(){
    string s;
    cin>>s;
    string result = football(s);
    cout<< result;
    return 0;
}
