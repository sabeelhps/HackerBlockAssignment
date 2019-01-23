#include<iostream>
using namespace std;
int main(){
    int n,i;
    int no=i,j;
    cin>>n;
    if(n==2){
        cout<<2;
        return 0;
    }cout<<2;
    for(i=3;i<=n;i++){
        no=i;
        for(j=2;j<=n-1;j++){
            if(no%j==0)
            break;
        }
        if(j==no)
        cout<<","<<" "<<no;
        

    }
    cout<<endl;
        
    return 0;
}