#include<iostream>
using namespace std;
int main(){
    char b[1000],a[1000],i,j,k=0;
    cin>>a;
    for(i=0;a[i]!='\0';i++){
        if(a[i]!=a[i+1]){
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;b[i]!='\0';i++)
    cout<<b[i];
    cout<<endl;
return 0;
}