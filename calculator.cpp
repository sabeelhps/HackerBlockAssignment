#include<iostream>
using namespace std;
int main(){
    char ch;
    int a,b;
    float c,d;
    while(1){
    cin>>ch;
    if(ch=='*'){
        cin>>c>>d;
            if(c<=0||d<=0)
                return 0;
        cout<<(c*d)<<'\n';
    }
    else if(ch=='+'){
        cin>>c>>d;
            if(c<=0||d<=0)
                return 0;
        cout<<(c+d)<<'\n';
    }
    else if(ch=='%'){
        cin>>a>>b;
            if(a<=0||b<=0)
                return 0;
            if(b==0)
                return 0;
        cout<<(a%b)<<'\n';
    }
    else if(ch=='/'){
        cin>>c>>d;
            if(c<=0||d<=0)
                return 0;
            if(d==0)
                return 0;
        cout<<(c/d)<<'\n';
    }
    else if(ch=='-'){
        cin>>c>>d;
            if(c<=0||d<=0)
                return 0;
        cout<<(c-d)<<'\n';
    }
    else if(ch=='X'||ch=='x'){
        return 0;
    }
    else{
        cout<<"Invalid operation. Try again."<<'\n';
    }
    }

    return 0;
}