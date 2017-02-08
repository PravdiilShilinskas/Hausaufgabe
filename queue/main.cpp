#include <iostream>
using namespace std;


struct node{
    int data;
    node*next;
};
class queue{
    node*head;
    int temp;
public:
    queue(int a){
        head=new node;
        head->data=a;
        head->next=NULL;
    }
    void push(int a){
        note*temp=new node;
        temp->next=head;
        tepm->data=a;
        head=temp;
    }
    int pop(){
        if(temp->next==NULL){
            int a=temp->data;
            delete temp;
            return a;
       }
        node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        int a=temp->data;
        delete temp->next;
        temp->next=NULL;
        return a;
    }
    ~queue(){
        while(head!=NULL){
            node*temp=head;
            head=head->next;
            delete temp;
        }
    }
};

int main(){
    return 0;
}
