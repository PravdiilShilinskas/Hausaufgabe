#include <iostream>
using namespace std;


struct note{
    int data;
    note*next;
};
class stack{
    note*head;
public:
    stack(int a){
        head=new note;
        head->data=a;
        head->next=NULL;
    }
    void push(int a){
        note*temp=new note;
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
        note*temp=head;
        int a=temp->data;
        head=head->next;
        delete temp;
        return a;
    }
    ~stack(){
        while(head!=NULL){
            note*temp=head;
            head=head->next;
            delete temp;
        }
    }
};

int main(){
    return 0;
}
