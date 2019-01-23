#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,rows;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
            if(j<=i){
                    if(j==1||j==i){
                        cout<<i<<'\t';
                    }
                    else{
                         cout<<"0"<<'\t';
                    
                    }
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}