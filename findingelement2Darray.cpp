#include<iostream>
using namespace std;

int main(){
    int a[5][5];
    int m,n,i,j,key;
    cout<<"enter the order of array"<<endl;
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter key"<<endl;
    cin>>key;
for(i=0;i<n;i++){
        for(j=0;j<m;j++){
          if(a[i][j]==key){
              cout<<"key found at position"<<"("<<(i+1)<<","<<(j+1)<<")";
              cout<<endl;
              return 0;
          }  
        }
        }
        cout<<"key not found"<<endl;

    

    return 0;
}