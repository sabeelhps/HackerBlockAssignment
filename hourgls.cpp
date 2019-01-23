#include<iostream>
using namespace std;
int main(){
    int i,j,m=0,k,rows,n;
    cin>>rows;
    rows=rows*2+1;
    n=(rows+1)/2;
    for(i=1;i<=rows;i++){
        i<=n?m++:m--; 
        k=n-m;
            for(j=1;j<=rows;j++){
                if(j>=m&&j<=rows+1-m){
                    cout<<k%10<<" ";
                    j<n?k--:k++;
                }
                else
                    cout<<"  ";    

            }
        cout<<endl;
    }
return 0;
}