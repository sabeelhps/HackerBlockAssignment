#include<iostream>
using namespace std;

int main(){
    char a[1001];
    char k;
    int i=0,j=0,count=0,count1=0,count2=0,min;
    cin.getline(a,1001);
    for(i=0;a[i]!='\0';i++){
        min=i;
        for(j=i+1;a[j]!='\0';j++){
            if(a[j]<a[min])
            min=j;
        }
        swap(a[min],a[i]);
    }
    for(i=0;a[i]!='\0';i++)
        cout<<a[i];
        cout<<endl;
    i=0;
        
    for(i=0;a[i]!='\0';i++){
        for(j=i;a[j]!='\0';j++){
        if(a[i]==a[i+1]){
            count1++;
        }
    }
    }
return 0;
}