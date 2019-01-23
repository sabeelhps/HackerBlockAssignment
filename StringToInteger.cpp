#include<iostream>
#include<math.h>
using namespace std;

int StrToInt(char *a,int l){
    if(l==0){
        return *(a)-'0';
    }
    int ans=(*(a)-'0')*pow(10,l-1)+StrToInt(a+1,l-1);
    return ans;
}


int main(){
    char a[1000],i;
    cin.getline(a,1000);
    int l=strlen(a);
    int k=StrToInt(a,l);
    cout<<endl;
    cout<<k<<endl;
    return 0;
}