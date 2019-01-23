#include<iostream>
using namespace std;

class car{
public:    
    int model;
    int price;
    char name[20];
};
int main(){
    int n,flag=0;
    car c[20];
    char a[20];
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter model"<<endl;
        cin>>c[i].model;
        cout<<"enter price"<<endl;
        cin>>c[i].price;
        cout<<"enter name"<<endl;
        cin>>c[i].name;
    }
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<"MODEL:->"<<c[i].model<<endl;
        cout<<"PRICE:->"<<c[i].price<<endl;
        cout<<"NAME :->"<<c[i].name<<endl;
        cout<<endl;
        cout<<endl;
    }
    while(1){
    cout<<"search car name"<<endl;
    cin>>a;
    for(int i=0;i<n;i++){
        int l=strcmp(a,c[i].name);
        if(l==0){
            cout<<"CAR Found!"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"CAR NOT Found!"<<endl;
    
    }
    return 0;
}