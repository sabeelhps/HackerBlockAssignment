#include<iostream>
using namespace std;
int main(){
    int i,j,m=0,rows,n;
    cin>>rows;
    n=(2*rows-1);
    for(i=1;i<=n;i++){
        i<=rows?m++:m--;
        for(j=1;j<=n;j++){
            if(j<=rows+1-m||j>=rows-1+m)
                cout<<"*";
            else
                cout<<" ";    
        }
        cout<<endl;
    }    



    return 0;
}