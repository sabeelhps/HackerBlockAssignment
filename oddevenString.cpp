#include<iostream>
using namespace std;

int main(){
    char a[1000];
    int i;
    cin.getline(a,1000);
    for(i=0;a[i]!='\0';i++){
        if(i%2==0){
            a[i]=a[i]+1;
            cout<<a[i];
        }
        else{
            a[i]=a[i]-1;
            cout<<a[i];
        }
    }
    cout<<endl;
    return 0;
}