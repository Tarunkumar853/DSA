# include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* head;

void push()
{
    int x;
    cin>>x;
    node*temp = new node();

    if(head == NULL)
    {
        temp->data = x;
        temp->next = head;
        head = temp;
    }
    else{
        temp->data = x;
        temp->next = head;
        head = temp;
    }
}

int pop()
{
    int x;
    if(head == NULL)
    {
        cout<<"Underflow"<<endl;
    } 
    else{
        x = head->data;
        node* temp = head;
        head = head->next;
        delete(temp);
    }
    return x;
}

void display()
{
    if(head==NULL)
    {
        cout<<"Empty Stack"<<endl;
    }
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    int choice;

    do
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";

        cin >> choice;

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 3);
}