#include<iostream>
using namespace std;

int main(){
    int sr,er,sc,ec,i,j,a[100][100],sum;
    int m,n;
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    sr=0;
    sc=0;
    er=m-1;
    ec=n-1;
    sum=m*n;
    while(sr<=er&&sc<=ec){
        if(sum<=0)
            break;
        for(i=sc;i<=er;i++){
            cout<<a[i][sc]<<","<<" ";
            sum--;
            if(sum<=0)
            break;
        }
        sc++;
        if(sum<=0)
            break;
        for(j=sc;j<=ec;j++){
            cout<<a[er][j]<<","<<" ";
            sum--;
            if(sum<=0)
            break;
        }
        er--;
       
        if(sum<=0)
            break;
        for(i=er;i>=sr;i--){
            cout<<a[i][ec]<<","<<" ";
            sum--;
            if(sum<=0)
            break;
        }
        ec--;
        if(sum<=0)
            break;
        for(j=ec;j>=sc;j--){
            cout<<a[sr][j]<<","<<" ";
            sum--;
            if(sum<=0)
            break;
        }
        sr++;
        if(sum<=0)
            break;
        }
    
    cout<<"END"<<endl;
    return 0;
}