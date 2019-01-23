#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int d,a,b,c,m,n;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d<0){
        cout<<"Imaginary";
    }
    else if(d>0){
        cout<<"Real and Distinct"<<'\n';
        cout<<'\n';
            m=((-b)+sqrt(d))/2*a;
            n=((-b)-sqrt(d))/2*a;
        cout<<m<<" "<<n<<'\n';   
    }
    else{
        cout<<"Real and Equal"<<'\n';
        m=(-b)/2*a;
        cout<<m<<'\n'; 
    }


    return 0;
}