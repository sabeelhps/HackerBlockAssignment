#include<iostream>
using namespace std;
int main(){
        int i,j;
        char k='A';
        for(i=1;i<=5;i++){
            k='A';
            for(j=1;j<=10;j++){
                if(j<=12-2*i){
                    cout<<k;
                    j<=6-i?k++:k--;
                    if(j==6-i)
                        k--;
                }
                else 
                    cout<<" ";

            }
            cout<<endl;
        }
    return 0;
}