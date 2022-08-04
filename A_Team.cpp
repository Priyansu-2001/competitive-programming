#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
        int arr[1000][3];
        for(int i=0; i<n; i++){
            for(int j=0; j<3; j++){
                cin>>arr[i][j];
            }
                
        }
        
         int add=0;
         for(int i=0; i<n; i++){
            int count =0;
            for(int j =0; j<3; j++){
                 if(arr[i][j]==1)
                     count++;
            }
            if(count > 1)
               add++;
        }
       cout<< add;  
          
    return 0;
}