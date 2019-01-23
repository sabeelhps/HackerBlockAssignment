#include<iostream>
using namespace std;

int main(){
    int a[10000],b[100000],c[10000],i,j,n,count=0;
    int k=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;    
    for(j=0;j<n;j++)
        cin>>b[j];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
            c[k]=b[j];
            count++;
            k++;   
            break;
            }
        }
       
    }
    for(i=0;i<count-1;i++){
        for(j=0;j<count-i-1;j++){
            if(c[j]>c[j+1])
            swap(c[j],c[j+1]);
        }
    }
    if(count==0)
        return 0;
    
    if(count==1)
        cout<<"["<<c[0]<<"]";
    else{   
        cout<<"[";
        for(i=0;i<=count-1;i++){
        cout<<c[i];
            if(i!=count-1)
                cout<<","<<" ";
            if(i==count-1){
                cout<<"]";
                break;
        }
    }
    }
    cout<<endl;
return 0;
}