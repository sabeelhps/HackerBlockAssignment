#include<iostream>
using namespace std;
int main(){
    int i=1,j=1,k=1,rows,n;
    cin>>rows;
    n=(2*rows-1);
    for(i=1;i<=rows;i++){
        k=1;
        for(j=1;j<=n;j++){
            if(j<=i||j>=n+1-i){
                cout<<k%10;
                j<rows?k++:k--;
                
            }
            else{
                cout<<" ";
                if(j==rows)
                 k--;
            }    
        }
        cout<<endl;
    }
    
    
    
    return 0;
}