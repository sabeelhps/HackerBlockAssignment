#include<iostream>
using namespace std;
int main(){
    int i,j,m=0,k,rows,n;
    cin>>rows;
    n=(2*rows+1);
    for(i=1;i<=n;i++){
        i<=rows+1?m++:m--;
        k=rows;
        for(j=1;j<=n;j++){
            if(j<=m||j>=n+1-m){
                cout<<k<<" ";
                j<=rows+1?k--:k++;
                if(j==rows+1)
                 k=k+2;
            }
            else{
                cout<<" "<<" ";
                if(j==rows+1)
                 k++;
            }    
        }
        cout<<endl;
    }

    return 0;
}