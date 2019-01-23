#include<iostream>
using namespace std;

void pattern(int n){
    if(n==0){
        return;
    }
   
    for(int i=0;i<n;i++){
        cout<<"*"<<'\t';
    }
    cout<<endl;
    pattern(n-1);
    return;
}


int main(){
    int rows;
    cin>>rows;
    pattern(rows);
    return 0;
}