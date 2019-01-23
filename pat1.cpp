#include<iostream>
using namespace std;
int main(){
    char ch='A';
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        ch='A';
        for(j=1;j<=n-i+1;j++){
            cout<<ch;
            ch=ch+1;
        }
        ch=ch-1;
        for(j=1;j<=n-i+1;j++){
            cout<<ch;
            ch=ch-1;
        }
        cout<<endl;
    }

    return 0;
}