#include<iostream>
using namespace std;
int main(){
    int i,j,rows,n;
    cin>>rows;
    n=(rows-1)/2;
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
            if(j<=i){
                if(i<=2){
                    cout<<"1";
                }
                if(i>2){
                    if(j==1||j==i)
                        cout<<i-1;
                    else
                        cout<<"0";    
                }   
                
        }
    }
    cout<<endl;
    }


    return 0;
}