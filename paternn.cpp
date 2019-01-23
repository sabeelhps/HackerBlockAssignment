#include<iostream>
using namespace std;
int main(){
        int val=0,i,j;
        for(i=1;i<=5;i++){
            val=1-val;
            for(j=1;j<=5;j++){
                if(j<=i)
                    cout<<val;
                else
                    cout<<" ";    
            }
            cout<<endl;
        }
        

    return 0;
}