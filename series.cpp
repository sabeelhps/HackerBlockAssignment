#include<iostream>
using namespace std;
int main(){
    int s,n1,n2,i=1,count=0;
    cin>>n1>>n2;
    while(1){
        s=3*i+2;
        if(s%n2!=0){
        cout<<s<<'\n';
        count++;
        if(count==n1)
        break;
        }
        i=i+1;
    }


    return 0;
}