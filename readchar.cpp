#include<iostream>
using namespace std;
int main(){
    char k;
    int count1=0,count2=0,count3=0,count4=0,count5=0;
       while(k!='$'){
           k=cin.get();
           if(k>='0'&&k<='9'){
               count1++;
           }
           else if((k>='A'&&k<='Z')||(k>='a'&&k<='z')){
               count2++;
           }
           else if(k==' '){
               count3++;
           }
           else if(k=='\n'){
               count4++;
           }
           else{
               count5++;
           }
        
    }
    cout<<"Numbers="<<count1<<endl;
    cout<<"Characters="<<count2<<endl;
    cout<<"White Spaces="<<count3<<endl;
    cout<<"Newline character="<<count4<<endl;
    cout<<"special character="<<count5-1<<endl;
    cout<<endl;
    return 0;
}