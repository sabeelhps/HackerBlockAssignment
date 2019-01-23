#include<iostream>
using namespace std;

int main(){
    char a[1001],i=0,j;
    char k;
    cin.getline(a,1001);
    while(a[i]!='\0'){
        if(a[i]>=65&&a[i]<=90){
            k=a[i];
            k=k+32;
            cout<<k;
        }
        else{
            k=a[i];
            k=k-32;
            cout<<k;
        }
        i++;
    }
    cout<<endl;
    return 0;
}