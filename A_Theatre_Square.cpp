#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){

    double n,m,a;
    cin>>n>>m>>a;
    long long d = ceil(n / a);
    long long e = ceil(m / a);
    long long res = d*e;
    cout<<res<<endl;
    return 0;
}