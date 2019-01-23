#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n1,n2,i=0,r=0,s=0,k=0,t;
    cin>>n1>>n2;
    for(i=n1;i<=n2;i++){
        t=0;
        k=i;
        s=0;
        while(k!=0){
            r=k%10;
            s=s+(pow(r,3));
            k=k/10;
        }
        if(s==i)
            cout<<s<<endl;
    }
    return 0;
}