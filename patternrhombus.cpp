#include<iostream>
using namespace std;
int main(){
    int s,i,j,m=0,k,rows,n,l;
    cin>>s;
    rows=2*s-1;
    n=(rows+1)/2;
    for(i=0;i<=rows;i++){
        if(rows%2==0){
            if(i<n)
                m++;
            if(i>=n+1)
                m--;    
        }
        else
        i<n?m++:m--;
        k=m;
        for(j=1;j<=rows;j++){
            if(j>=n+1-m&&j<=n-1+m){
                cout<<k<<'\t';
                j<n?k++:k--;
            }
            else
                cout<<" "<<'\t';    
        }
        cout<<endl;
    }
    return 0;
}