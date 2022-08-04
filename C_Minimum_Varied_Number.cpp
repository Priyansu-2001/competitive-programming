#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector <int> v;
    while(n--){
      int s;
      cin>>s;
      int sum =0;
      for(int i=9; i>0; i--) {
        sum = sum + i;
        if(sum > s){
             sum = sum - i;
        }
        if(sum<= s){
            v.push_back(i);
        }
      }
      for(int i=0; i<v.size();i++){
        cout<<v[i];
      }
    }
      return 0;
}