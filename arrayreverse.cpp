#include<iostream>
using namespace std;
int main(){
    int a[1000],n,key,i;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter key"<<endl;
    cin>>key;
    for(i=0;i<n;i++){
        if(a[i]==key){
        cout<<"key found at position="<<i<<endl;
        break;
        }
        else{
         cout<<"key not found"<<endl;
        break;
        }
    }
    return 0;
}