#include<iostream>
using namespace std;
int main(){
    int c,min,max,step,i=0;
    cin>>min>>max>>step;
    for(i=min;i<=max;){
        c=(5.0/9)*(i-32);
        cout<<i<<"  "<<c<<'\n';
         i=i+step;
    }


    return 0;
}