# include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// void linkedlisttra(struct Node* ptr){
//     while(ptr!=NULL)
//     {
//      cout<<"Node : "<<ptr->data<<endl;
//      ptr = ptr->next;
//     }
    
// }

//creation and transversal
// int main()
// {
//     Node* head = new Node();
//     Node* node1 = new Node();
//     Node* node2 = new Node();
//     Node* node3 = new Node();
//     Node* node4 = new Node();
//     head->data = 40;
//     head->next = node1;
//     node1->data = 80;
//     node1->next = node2;
//     node2->data = 120;
//     node2->next = node3;
//     node3->data = 160;
//     node3->next = node4;
//     node4->data = 200;
//     node4->next = NULL;
//     // linkedlisttra(head);
//     while(head!=NULL)
//     {
//         cout<<"Node : "<<head->data<<endl;
//         head = head->next;
//     }
//     return 0;
// }

//insertion at beginning , between, end
// int main()
// {
//     Node* head = new Node();
//     Node* node1 = new Node();
//     Node* node2 = new Node();
//     Node* node3 = new Node();

//     head->data = 40;
//     head->next = node1;

//     node1->data = 80;
//     node1->next = node2;

//     node2->data = 120;
//     node2->next = node3;

//     node3->data = 160;
//     node3->next = NULL;

//     Node* temp = head;
//     cout<<"Original Linked List: "<<endl;
//     while(temp!=NULL)
//     {
//         cout<<"Node : "<<temp->data<<endl;
//         temp = temp->next;
//     }

//     // int data;
//     // cout<<"enter the insert value: "<<endl;
//     // cin>>data;
//     Node* newnode = new Node();
//     newnode->data = 56;

//     // head = newnode;

//     // cout<<"After Insertion at beginning"<<endl;
//     // temp = head;
//     // while(temp!=NULL)
//     // {
//     //     cout<<"Node : "<<temp->data<<endl;
//     //     temp = temp->next;
//     // }

//     //Insertion at Position
//     Node* p = head;
//     // int index;
//     // cout<<"Enter the Position for insertion: "<<endl;
//     // cin>>index;
//     // int i=0;
//     // while(i!=index-1)
//     // {
//     //     p= p->next;
//     //     i++;
//     // }
//     // newnode->next = p->next;
//     // p->next = newnode;
//     // temp = head;
//     // while(temp!=NULL)
//     // {
//     //     cout<<"Node : "<<temp->data<<endl;
//     //     temp = temp->next;
//     // }

//     //Insertion at end 
//     while(p->next!=NULL)
//     {
//         p = p->next;
//     }
//     p->next = newnode;
//     newnode->next = NULL;

//     temp = head;
//     cout<<"Insertion at End : "<<endl;
//     while(temp!=NULL)
//     {
//         cout<<"Node : "<<temp->data<<endl;
//         temp = temp->next;
//     }
//     return 0;
// }

//Deletion at beginning,end,between,by value
int main()
{
    int n;
    cout<<"Enter the number of Nodes:"<<endl;
    cin>>n;

    Node* head = NULL;
    Node* temp = NULL;

    for(int i=0;i<n;i++)
    {
        int value;
        cout<<"Enter the Value :";
        cin>>value;

        Node* newnode = new Node();
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    cout<<"Original Linked List:"<<endl;
    temp = head;
    while(temp!=NULL)
    {
        cout<<"Element : "<<temp->data<<endl;
        temp = temp->next;
    }

    //deletion at beginning
    // Node* newnode = head;
    // head = head->next;
    // delete newnode;

    // cout<<"After Deletion function :"<<endl;
    //  temp = head;
    // while(temp!=NULL)
    // {
    //     cout<<"Element : "<<temp->data<<endl;
    //     temp = temp->next;
    // }

    //deletion at between
    // Node* p =head;
    // int index;
    // cout<<"Enter the index for deletion"<<endl;
    // cin>>index;

    // int i=0;
    // while(i!=index-1)
    // {
    //     p= p->next;
    //     i++;
    // }
    // Node* newnode = p->next;
    // p->next = newnode->next;
    // delete newnode;
    // cout<<"After Deletion function :"<<endl;
    //  temp = head;
    // while(temp!=NULL)
    // {
    //     cout<<"Element : "<<temp->data<<endl;
    //     temp = temp->next;
    // }

    //deletion at end 
    Node* p = head;
    while(p->next->next!=NULL)
    {
        p = p->next;
    }
        delete p->next;
        p->next = NULL;

    cout<<"After Deletion function :"<<endl;
     temp = head;
    while(temp!=NULL)
    {
        cout<<"Element : "<<temp->data<<endl;
        temp = temp->next;
    }
    return 0;
}