#include<iostream>
using namespace std;

void bubble(int *p,int s){
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-1-i;j++){
            if(*(p+j)>*(p+j+1))
                swap(*(p+j),*(p+j+1));
        }
    }
}



int main(){
    int a[10000],n,i,j,k,target;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<<endl;
        cin>>target;    
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                for(k=j+1;k<n;k++){
                    if(a[i]+a[j]+a[k]==target){
                        int b[3];
                        b[0]=a[i];
                        b[1]=a[j];
                        b[2]=a[k];
                        bubble(b,3);
                        cout<<b[0]<<","<<" "<<b[1]<<" and "<<b[2]<<endl;
                        break;
                  
                    }
                }
            }

        }
        
    return 0;
}