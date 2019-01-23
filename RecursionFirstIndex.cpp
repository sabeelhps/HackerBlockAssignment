#include<iostream>
using namespace std;

int firstIndex(int *p,int n,int key){
    if(*(p)==key){
        return 0;
    }

    int ans=firstIndex(*(p+1),n-1,key));

    return ans;
}

int main(){
    int a[100],i,j,n,key;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>key;    
    firstIndex(a,n,key);    
   
    
    return 0;
}