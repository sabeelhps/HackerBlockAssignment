#include<iostream>
using namespace std;

void printReverse(int *p,int n){
    for(int i=9;i>=0;i--)
        cout<<*(p+i)<<" ";
}
int sum(int *p,int n){
    int s=0;
    for(int i=0;i<n;i++){
       s+=(*(p+i));
    }
    return s;
    cout<<endl;
}
void bubble(int *p,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(*(p+j)>*(p+j+1))
            swap(*(p+j),*(p+j+1));
        }
    }
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
}
int main(){
    int a[10]={2,11,12,0,5,6,7,8,9,10};
    printReverse(a,10);
    cout<<endl;
    int k=sum(a,10);
    cout<<"sum is :"<<k<<endl;
    bubble(a,10);

    return 0;
}