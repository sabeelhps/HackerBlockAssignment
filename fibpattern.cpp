#include<iostream>
using namespace std;
int main(){
        int a=0,b=1,c=0,i=1,j,rows;
        cin>>rows;
        if(rows==1){
            cout<<"0"<<endl;
            return 0;
        }
        cout<<"0"<<endl;
        for(i=1;i<=rows-1;i++){
            for(j=1;j<=rows;j++){
                if(j<=i+1){
                    a=b;
                    b=c;
                    c=a+b;
                    cout<<c<<'\t';
                }
                else
                    cout<<'\t';    
            }
            cout<<endl;
           
        }
        
        

    return 0;
}