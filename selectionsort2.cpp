#include<iostream>
using namespace std;

int main(){
    int a[10000],n;
    int i,j,min;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j])
            min=j;
        }
        swap(a[i],a[min]);
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}