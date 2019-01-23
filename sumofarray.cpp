#include<iostream>
using namespace std;

int main(){
    int a[10000],b[10000],i,j,n,m;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;    
    for(i=0;i<m;i++)
        cin>>b[i];
    int num1=0,num2=0;    
    for(i=0;i<n;i++){
        num1=a[i]+num1*10;

    } 
    for(i=0;i<m;i++){
        num2=b[i]+num2*10;

    }
    int num3=num1+num2;
    int k=0,c[10000];
    while(num3!=0){
        c[k]=num3%10;
        num3=num3/10;
        k++;
}      
for(i=k-1;i>=0;i--)
    cout<<c[i]<<","<<" ";
   cout<<"END"<<endl; 
    return 0;
}