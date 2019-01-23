#include<iostream>
using namespace std;

int main(){
    long long int item,l=0,u,m,n,i;
    long long int a[1000000];
    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>a[i];

    cin>>item;    
    
    l=0;
    u=n-1;
    while(l<=u){
        m=(l+u)/2;
        if(a[m]==item){
            cout<<m<<endl;
            return 0;
        }
        else if(item>a[m])
            l=m+1;
        else
            u=m-1;
    }
    cout<<-1;
    
    return 0;
}