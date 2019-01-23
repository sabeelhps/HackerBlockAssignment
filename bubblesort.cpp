#include<iostream>
using namespace std;
int main(){
    int a[100],i,j,n,flag;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
        for(i=0;i<n-1;i++){
            flag=0;
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    flag=1;
                    swap(a[j],a[j+1]);
                }
            }
            if(flag==0)
                break;
        }    
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";

        cout<<endl;

    return 0;
}