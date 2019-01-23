#include<iostream>
using namespace std;
int main(){
    int n,s,a,d,i=1;
    cout<<"enter the value of a and d"<<'\n';
    cin>>a>>d;
    cout<<"enter the number of terms";
    cin>>n;
    while(i<=n){
        s=a+(i-1)*d;
            cout<<s<<" ";
            i=i+1;
        }
    return 0;
}