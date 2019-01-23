#include<iostream>
using namespace std;

int main(){
    char a[100],temp;
    int l=0,i=0,j;
    cin>>a;
    for(i=0;a[i]!='\0';i++)
        l++;
    cout<<l<<endl;
    j=l-1;
    i=0;
    while(i<j){
       swap(a[i],a[j]);    
        i++;
        j--;
    }
    for(i=0;a[i]!='\0';i++)
    cout<<a[i];    
return 0;
}