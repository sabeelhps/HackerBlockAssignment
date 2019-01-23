#include<iostream>
using namespace std;
int main(){
        int n,sum=0,t;
        cin>>t;
        while(t--){
            cin>>n;
            if(n%2==0){
                sum=n/2;
                cout<<sum<<endl;
            }
            else{
                sum=((-1)*(n+1))/2
                cout<<sum<<endl;
            }

        t--;
        }
    return 0;
}