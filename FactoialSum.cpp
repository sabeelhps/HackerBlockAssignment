#include<iostream>
using namespace std;

int fact(int i){
    if(i==0){
        return 1;
    }
    int ans=i*fact(i-1);
    return ans;
}

int factorial(int i){
    if(i==0){
        return 1;
    }
    int ans=fact(i)*factorial(i-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int k=factorial(n);
    cout<<k<<endl;

    
    return 0;
}