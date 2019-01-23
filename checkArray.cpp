#include<iostream>
using namespace std;

bool checkSeven(int *a,int n,int i){
    int k;
    if(i==n)
        return false;
    if(a[i]==7){
        return true;
    }
    bool k=checkSeven(a,n,i+1);
    return k;  


}

int main(){
    int a[100]{1,2,3,4,4,5,77,6,5,7,4,6};
    int n=sizeof(a)/sizeof(int);
    
    return 0;
}