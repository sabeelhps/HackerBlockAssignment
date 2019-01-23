#include<iostream>
using namespace std;

int power(int x,int n){

    if(x==0||n==0)
        return 1;
    return x*power(x,n-1);    

}

int main(){

    int c,a,b;
    cin>>a>>b;
    c=power(a,b);
    cout<<c<<endl;

    
    return 0;
}