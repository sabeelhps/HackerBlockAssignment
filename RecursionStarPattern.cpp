#include<iostream>
using namespace std;

void pattern(int n){
    if(n==0){
        return;
    }
    pattern(n-1);
    for(int i=0;i<n;i++){
        cout<<"*"<<'\t';
    }
    cout<<endl;
    return;
}


int main(){
    int rows;
    cin>>rows;
    pattern(rows);
    return 0;
}