#include<iostream>
using namespace std;
int main(){
    char a[1000];
    int i=0,j=0,count=0;
    cin.getline(a,1000);
    
    while(a[i]!='\0'){
        if(a[j]==a[j+1]){
            count++;
        }
        else{
            if(count==0){
                cout<<a[j];
                count=0;
            }
            else{
            cout<<a[j]<<count+1;
            count=0;
        }
        }
    j++;
    i++;
    }
    cout<<endl;
return 0;
}