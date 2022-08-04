#include<bits/stdc++.h>
#include<math.h>
using namespace std;

string football(int n){  

    int arr[13] = {4,7,47,44,74,77,447,474,744,747,444,477,777};
    for(int i=0; i<13; i++){
          if(n % arr[i]==0)
             return "YES";
    }
   
         return "NO";       
    
}
int main(){
    int n;
    cin>>n;
    string result = football(n);
    cout<< result;
    return 0;
}
