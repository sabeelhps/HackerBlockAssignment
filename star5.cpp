#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,k=0,m=1;
    for(i=1;i<=5;i++){
        i<=3?k++:k--;
        for(j=1;j<=5;j++){
            if(j>=4-k&&j<=2+k){
                cout<<m;
                j<=3?m++:m--;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}