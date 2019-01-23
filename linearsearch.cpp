#include<iostream>
#include<math.h>
using namespace std;

int main(){
   int n,a[10000],m,count=0,i;
   cin>>n;
   for(i=0;i<n;i++)
        cin>>a[i];

   cin>>m; 
   for(i=0;i<n;i++){
       if(a[i]==m){
        cout<<i<<endl;
        break;
       }
       count++;
    }
    if(count==n)
    cout<<"-1"<<endl;
     
    
    return 0;
}