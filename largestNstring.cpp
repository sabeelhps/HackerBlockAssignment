#include<iostream>
using namespace std;

int main(){
    char a[100];
    char larg[100];
    int i;
    cin.getline(a,100);
    larg[100]='0';
    for(i=0;a[i]!='\n';i++){
        if(a[i]>larg[i])
        larg[i]=a[i];
    }
    cout<<larg<<endl;
    

    return 0;
}