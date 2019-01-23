#include<iostream>
using namespace std;

int main(){
    int item,l=0,u=9,m,n;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    item=1;
    while(l<=u){
        m=(l+u)/2;
        if(a[m]==item){
            cout<<"search successfull,item found at index="<<m<<endl;
            return 0;
        }
        else if(item>a[m])
            l=m+1;
        else
            u=m-1;
    }
    cout<<"search unsuccesful"<<endl;
    return 0;
}