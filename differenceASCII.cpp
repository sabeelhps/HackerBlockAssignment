#include<iostream>
using namespace std;

int main(){
    char a[1001];
    int i=0,j,r,l;
    cin.getline(a,1001);
    l=0;
    for(i=0;a[i]!='\0';i++)
        l++;

    j=0;
    i=0;
    while(i<l){
        if(a[j+1]!='\0'){
        r=a[j+1]-a[j];
        cout<<a[j]<<r;
        }
        else
            cout<<a[j];
        j++;
        i++;
    }
    cout<<endl;
    return 0;
}