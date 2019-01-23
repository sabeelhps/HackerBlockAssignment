#include<iostream>
using namespace std;
int main(){
        long long int r,n,s=0;
        cin>>n;
        while(n!=0){
            r=n%10;
            s=s^r;

            n=n/10;
        }
        cout<<s<<endl;

    return 0;
}