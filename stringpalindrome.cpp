#include<iostream>
using namespace std;

int main(){
    char a[10000];
    int j,i,l=0;
    cin.getline(a,10000);
    for(i=0;a[i]!='\0';i++)
        l++;
    i=0;
    j=l-1;
    while(i<j){
        if(a[i]!=a[j]){
            cout<<"false"<<endl;
            return 0;
        }
        i++;
        j--;    
    }
    if(a[i]==a[j])
    cout<<"true"<<endl;    
return 0;
}