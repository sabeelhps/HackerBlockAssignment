#include<iostream>
using namespace std;

string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void intToString(int n){
    if(n==0){
        return;
    }
    int index=n%10;
    intToString(n/10);
    cout<<s[index]<<" ";
}
int main(){
    long long int n;
    cin>>n;
    intToString(n);
    cout<<endl;
    return 0;
}