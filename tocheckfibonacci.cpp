#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    float l,k,m,s,x;
    cin>>n;
    k=(5*n*n-4);
    m=(5*n*n+4);
    s=sqrt(k);
    x=sqrt(m);
    if((x-floor(x)==0)||(s-floor(s)==0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;    

    return 0;
}