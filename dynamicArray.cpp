#include<iostream>
using namespace std;
int main(){
        int *p;
        int n;

        cout<<"enter size"<<endl;
        cin>>n;

        p=new int[n];
        for(int i=0;i<n;i++){
            cin>>*(p+i);

        }
        for(int i=0;i<n;i++){
            cout<<*(p+i)<<" ";

        }
        delete []p;
        p=0;
        cout<<endl;
        
        
    

    return 0;
}