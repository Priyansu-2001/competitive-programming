#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int  n; 
    cin>>n;
     string s;
    while(n--){
      cin>>s;
       for(int i=0; i< s.length();i++){
          s[i]=toupper(s[i]);
       }
        if(s == "YES")
      cout<< "YES"<<endl;
    else
      cout<< "NO"<<endl;
    }
   
      return 0;
}