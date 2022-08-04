#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    vector<char> v;
    string s;
    cin>> s;
    for(int i=0; i<s.size();i++){
        if(s[i] < 97){
             s[i] = s[i]+32;
             if(s[i]!='a'&& s[i]!='e'&& s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!= 'y'){
                    v.push_back('.');
                    v.push_back(s[i]);
             }
           
        }
         else{
            if(s[i]!='a'&& s[i]!='e'&& s[i]!='i' && s[i]!='o' && s[i]!='u'&& s[i]!='y'){
                    v.push_back('.');
                    v.push_back(s[i]);
             }
             
        }
    }
    for(int i=0; i<v.size();i++)
    cout<<v[i];
    return 0;
}