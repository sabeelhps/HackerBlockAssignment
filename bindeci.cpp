#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int a,b,i,j=0,s=0,m,n;
    int count=0,r;
    cin>>n;
    while(n--){
        s=0;
        j=0;
        cin>>a;
        while(1){
            r=a%10;
            s=s+(r*pow(2,j));
            j++;
            a=a/10;
            if(a==0)
            break;
        }
        cout<<s<<'\n';
    }
    return 0;
}