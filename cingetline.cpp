#include<iostream>
using namespace std;

int main(){
    char ch[100];
    int l,i,j;
    cin>>ch;
    cout<<ch<<endl;
    for(i=0;ch[i]!='\0';i++){
        l=i+1;
    }
    cout<<l<<endl;
    i=0;
    j=l-1;
    while(i<j){
        if(ch[i]!=ch[j]){
            cout<<"Not palindrome"<<endl;
            return 0;
        }
        i++;
        j--;

    }
    cout<<"palindrome"<<endl;
    return 0;
}