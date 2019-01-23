#include<iostream>
using namespace std;

int main(){
    int i,j,m=0,k=0;
    for(i=1;i<=7;i++){
        k=1;
        i<=4?m++:m--;
        for(j=1;j<=7;j++){
            if(j>=5-m&&j<=3+m){
                
                cout<<k;
                j<=4?k++:k--;
                if(j==4)
                k=k-2;
            }
            else
                cout<<" ";

        }
        cout<<endl;
    }
    
    return 0;
}