#include<iostream>
using namespace std;
int main(){
    int i,j,k,rows;
    cin>>rows;
    for(i=1;i<=rows;i++){
        k=rows-i;
        for(j=1;j<=rows;j++){
            if(j<=rows+1-i){
                cout<<k;
                k--;
            }
            else
                cout<<" ";    
        }
        cout<<endl;
    }


    return 0;
}