#include<iostream>
using namespace std;
int main(){
    int sr,er,sc,ec,i,j,n,m;
    int a[1000][1000];
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    sr=0;
    ec=n-1;
    er=m-1;
    sc=0;
    i=0;
    j=0;
    int sum=m*n;
    while(sr<=er&&sc<=ec){
        if(sum<=0)
            break;
        for(i=sc;i<=ec;i++){
            cout<<a[sr][i]<<" ";
            sum--;
            if(sum<=0)
            break;
        }
        if(sum<=0)
            break;
        sr++;
        for(j=sr;j<=er;j++){ 
            cout<<a[j][ec]<<" ";
            sum--;
            if(sum<=0)
            break;
        }
        if(sum<=0)
            break;
        ec--;
        for(i=ec;i>=sc;i--){
            cout<<a[er][i]<<" ";
            sum--;
            if(sum<=0)
            break;
        }
        er--;
        if(sum<=0)
            break;
        for(j=er;j>=sr;j--) {
            cout<<a[j][sc]<<" ";
            sum--;
            if(sum<=0)
            break;
        }
        if(sum<=0)
            break;   
        sc++;
    }


    cout<<endl;
    return 0;
}