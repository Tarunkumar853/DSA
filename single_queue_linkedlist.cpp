#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;


void enqueue(int item)
{
    Node *newNode = new Node;
    newNode->data = item;
    newNode->next = NULL;

    if (front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    cout << item << " inserted.\n";
}

void dequeue()
{
    if (front == NULL)
    {
        cout << "Queue Underflow\n";
        return;
    }

    Node *temp = front;
    cout << "Deleted: " << temp->data << endl;

    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

void display()
{
    if (front == NULL)
    {
        cout << "Queue is Empty\n";
        return;
    }

    Node *temp = front;

    cout << "Queue: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int choice, item;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter item: ";
            cin >> item;
            enqueue(item);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}