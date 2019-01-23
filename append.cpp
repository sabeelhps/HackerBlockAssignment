#include<iostream>
using namespace std;

int main(){
    char a[100],b[100];
    int l1,l2,i,j=0;
    cin>>a;
    cin>>b;
    for(i=0;a[i]!='\0';i++)
        l1=i+1;
    for(i=0;b[i]!='\0';i++)
        l2=i+1; 
    i=l1 ;   
    while(j<=l2){
        a[i]=b[j];
        i++;
        j++;
    } 
    cout<<a<<endl;      
    return 0;
}