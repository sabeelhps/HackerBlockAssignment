#include<iostream>
using namespace std;

void Dec(int i){
    if(i==0){
        return;
    }
    cout<<i<<" ";
    Dec(i-1);
return;
}
void Inc(int i){
    if(i==0){
        return;
    }
    Inc(i-1);
    cout<<i<<" ";
    return;
}
int main(){
    int n;
    cin>>n;
    Dec(n);
    Inc(n);
    return 0;
}