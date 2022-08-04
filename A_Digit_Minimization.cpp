#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    int temp;
    cin>>n;
    string num = to_string(n);
    int count = num.size();
    if(count == 1)
      cout<<num<<endl;
    else if(count == 2){
        swap(num[0],num[1]);
        cout<< num[0]<<endl;
    }
    else{
        for(int i=0; i<count; i++){
            for(int j=i+1; j<count; j++){
                     if(num[i]> num[j]){
                        temp = num[i];
                        num[i] = num[j];
                        num[j]= temp;
                     }
            }        
        }
        cout<< num[0]<<endl;
        
    }
  }  
    
    return 0;
}