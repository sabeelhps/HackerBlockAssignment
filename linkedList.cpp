#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data)


};

node* CreateLL(){
    node* head=NULL;
    int data;
    cin>>data;
    while(data!=-1){
    node* n=new node(data);
    n->next=head;
    head=n;
    cin>>data;

    }
    return head;

}
void print(node* head){
    while(head){
        cout<<head->data<<"-->";
        head=head->next;
        cout<<endl;
    }
}






}
int main(){
    node* head=CreateLL();
    print(head);

    
return 0;
}