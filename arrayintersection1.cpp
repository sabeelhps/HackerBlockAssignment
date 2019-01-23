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
    int a[10000],b[100000],c[100000],i,j,n,count=0;
    int k=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
        bubble(a,n);

    cout<<endl;    
    for(j=0;j<n;j++)
        cin>>b[j];
        bubble(b,n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
                b[j]=-69;
            c[k]=a[i];
                k++;
            count++;
            break;
        }
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