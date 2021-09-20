#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
class stack
{
    Node *top;
    public:
    stack()
    {
        top=NULL;
    }
    void push(int x);
    void pop();
    void display();
};
void stack::push(int x)
{
    Node *t = new Node;
    t->data=x;
    if(top==NULL)
    {
        t->next=NULL;
        top=t;
    }
    else
    {
        t->next=top;
        top=t;
    }
}
void stack::pop()
{
    if(top==NULL) cout<<"Empty Stack";
    else
    {
        Node *p=top;
        cout<<"Popped element: "<<p->data;
        top=top->next;
        delete p;
    }
    cout<<endl;
}
void stack::display()
{
    Node *p=top;
    cout<<"The Stac: ";
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    stack S;
    S.push(4);
    S.push(5);
    S.push(8);
    S.push(3);
    S.display();
    S.pop();
    S.display();
    S.pop();
    S.display();
    return 0;
}
