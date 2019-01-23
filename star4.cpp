#include<iostream>
using namespace std;
int main(){
    int i,j,k=0;
    for(i=1;i<=4;i++){
        k=0;
        for(j=1;j<=7;j++){
            if(j>=5-i&&j<=3+i){
                j<=4?k++:k--;
                cout<<k;
                
            }
            else
                cout<<" ";

        }
        cout<<'\n';
    }


    return 0;
}