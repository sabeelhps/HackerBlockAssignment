#include<iostream>
using namespace std;
int main(){
    int n,i=2,k=1,j;
    cin>>j;
    for(n=2;n<=j;n++){
        k=1;
        for(i=2;i<=n-1;i++){
            if(n%i==0){
                k=2;
                break;
            }  
        }
        if(k==1)
            cout<<n<<",";
    }
    return 0;
}