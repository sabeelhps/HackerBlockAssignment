#include<iostream>
using namespace std;

/*void bubble(int *p,int s){
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-1-i;j++){
            if(*(p+j)>*(p+j+1))
                swap(*(p+j),*(p+j+1));
        }
    }
}*/

int main(){
    
    int a[10000],i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    int target;
    cin>>target;    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                if(a[i]>a[j])
                cout<<a[j]<<" "<<"and"<<" "<<a[i]<<endl;
                else   
                cout<<a[i]<<" "<<"and"<<" "<<a[j]<<endl;
            }
        }
    }
    
    

return 0;
}