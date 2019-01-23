#include<iostream>
using namespace std;

void selectionSort(int *p,int n){
    int i,j,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if((*(p+j))<(*(p+min)))
            min=j;
        }
        swap(*(p+min),*(p+i));
    }
}

int main(){
    int a[100],b[100],n,i,j,k=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    selectionSort(a,n);
    i=0;
    j=n-1;
    while(i<j){
        b[k]=a[i];
        k++;
        b[k]=a[j];
        k++;
    }
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;    

return 0;
}