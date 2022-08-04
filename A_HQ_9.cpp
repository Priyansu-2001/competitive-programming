#include<bits/stdc++.h>
#include<math.h>
using namespace std;

string football(string &s){  

    for(int i=0; i<s.size();i++){
        if(s[i] == 'H' || s[i] == 'Q'  || s[i]== '9'){
                return "YES";
                break;
        }
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
