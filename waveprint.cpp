#include<iostream>
using namespace std;

int main(){
    int a[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int j,i;
    for(int i=0;i<4;i++){
        if(i%2==0){
    for(j=0;j<3;j++){
        cout<<a[j][i]<<" ";
    }
    }
    else{
    for(j=2;j>=0;j--){
        cout<<a[j][i]<<" ";
    }
    }
    }
    
    return 0;
}