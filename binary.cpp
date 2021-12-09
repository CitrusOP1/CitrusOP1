#include<iostream>
using namespace std;
struct node{
    int num;
    node* next,*prev;
};
class binary{
    private:
    node* head = NULL,*temp = NULL,*p,*head2 = NULL,*temp1 = NULL;
    public:
    node* create(int k){
            p = new node;
            p->num=k;
            p->next = NULL;
            p->prev = NULL;
            return p;
    }
    node* insert(node* m,int j){
        node*nn = create(j);
        if(m == NULL){
            m = nn;
        }
        else{
            while(temp->next!=NULL){
                temp = temp->next;
            }
            nn = temp->next;
            nn->prev=temp;
            nn = temp;
            temp->next = NULL;
            return m;
        }
    }
    void display(node *m){
        temp1 = m;
        while(temp1 != NULL){
            cout<<temp1->num<<" ";
            temp1 = temp1->next;
        }
    }
    void binaryInsert(){
        int a;
        cout<<"enter decimal number ";
        cin>>a;
        while(a != 0){
            a = a%2;
            insert(head,a);
            a = a/2;
        }
        display(head);
    }
    void comple1(){
        while(temp->prev != NULL){
            if(temp->num == 1){
                insert(head2,0);
            }
            else{
                insert(head2,1);
            }
            temp = temp->prev;
        }
        display(head2);
    }
    void comple2(){
        temp = head2;
        while(temp->next != NULL){
            temp = temp->next;
        }
        int carry = 0;
        while(temp!=NULL){
            if(temp->num == 1 && carry == 1){
                carry = 1;
                cout<<0<<" ";
            }
            else if(temp->num == 1 && carry == 0){
                cout<<1<<" ";
                carry = 0;
            }
            else if(temp->num == 0 && carry == 1){
                cout<<1<<" ";
                carry = 1;
            }
            else if(temp->num == 0 && carry == 0){
                carry = 0;
                cout<<0<<" ";
            }
            else{
                carry = 1;
                cout<<1<<" ";
            }
            temp = temp->prev;
            
        }

    }
};
int main(){
    binary b;
    b.binaryInsert();
    b.comple1();
    b.comple2();
    return 0;
}