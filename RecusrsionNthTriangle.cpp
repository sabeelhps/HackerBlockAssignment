#include<iostream>
using namespace std;

int triangle(int i){
    if(i==1){
        return 1;
    }
    int ans=i+triangle(i-1);
    return ans;

}

int main(){
    int n;
    cin>>n;
    int k=triangle(n);
    cout<<k<<endl;
    
    return 0;
}