#include<iostream>
using namespace std;

int main(){
    long long int a[100000],t,n,i=0,j=0,sum=0,k=1,money;
    cin>>t;
    while(k<=t){
    
    cin>>n;
    cin>>money;
    for(i=0;i<n;i++)
    cin>>a[i];
        while(j<n){
            if(a[j]+1==a[j+1]){
                sum=sum+a[j];
                
            }
            j++;
            if(a[j]+1!=a[j+1]){
            sum=sum+a[j];
            break;
            }
        }
    
    
    if(sum==money)
        cout<<"YES";
    else
        cout<<"No";
    cout<<endl;
    k++;
    sum=0;
    money=0;
    j=0;
    
    }        
    
    return 0;
}