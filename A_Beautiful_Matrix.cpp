#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
        
         int c,r,x;
         for(int i=1; i<=5; i++){
            for(int j =1; j<=5; j++){
                cin>>x;
                if(x == 1){
                    cout<< abs(i-3)+abs(j-3)<<endl;
                    break;
                }
            }
        }
         
          
    return 0;
}