#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,rows;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
            if(j<=i){
                if(i%2!=0){
                    cout<<"1";
                }
                if(i%2==0){
                    if(j==1||j==i){
                        cout<<"1";
                    }
                    else{
                         cout<<"0";
                    }
                }
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}