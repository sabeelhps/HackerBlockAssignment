#include<iostream>
using namespace std;
int main(){
    int f,i=0;
    int c;
    while(i<=300){
        c=(5/9.0)*(i-32);
        cout<<i<<"        ";
        cout<<c;
        cout<<'\n';
        i=i+20;
    }


    return 0;
}