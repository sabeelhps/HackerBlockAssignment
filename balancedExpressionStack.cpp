#include<iostream>
#include<stack>
using namespace std;

bool checkBalanced(char *a){
    stack<char>s;
    for(int i=0;a[i]!='\0';i++){
        char ch=a[i];
        switch(ch){
            case '{':
            case '(':
            case '[':
                        s.push(ch);
                        break;
            case '}':if(!s.empty()&& s.top()=='{'){
                        s.pop();
                        }
                        else{
                            return false;
                        }
                        break;
            case ')'                    
        }
    }


}

int main(){
    
    
    char a[]="{a+(b+c)+[d+(e+f)]}";
    
    if(checkBalanced(a)){
        cout<<"Balanced!"<<endl;
    }
    else{
        cout<<"Not Balanced!"<<endl;
    }
    cout<<endl;

    return 0;
}