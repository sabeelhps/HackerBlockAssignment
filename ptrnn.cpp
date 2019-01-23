#include<iostream>
using namespace std;
int main(){
        int i,j,m=0,k,rows,n,l;
        cin>>rows;
        n=(2*rows-1);
        l=(rows+1)/2;
        for(i=1;i<=rows;i++){
            i<=l?m++:m--;
            k=m;
                for(j=1;j<=n;j++){
                    if((j>=rows+2-2*m&&j<=rows+1-m)||(j>=rows-1+m&&j<=rows-2+2*m)){
                        cout<<k<<" ";
                        j<=rows?k--:k++; 
                    }
                    else{
                        cout<<" "<<" ";
                        if(j==rows)
                            k++;    
                    }
            
                }
        cout<<endl;
        }

    return 0;
}