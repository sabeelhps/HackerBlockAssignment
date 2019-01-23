#include<iostream>
using namespace std;
int main(){
    int i,j,m=0,rows,n;
    cin>>rows;
    if(rows==0||rows%2==0)
    return 0;
    n=(rows+1)/2;
    for(i=1;i<=rows;i++){
        i<=n?m++:m--;
        for(j=1;j<=rows;j++){
            if(j<=n+1-m||j>=n-1+m)
                cout<<"*"<<'\t';
            else
                cout<<" "<<'\t';    
        }
        cout<<endl;
    }

    return 0;
}