#include <bits/stdc++.h>
using namespace std;

#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;


void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        cout << "Queue Overflow\n";
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    cq[rear] = value;
    cout << value << " inserted.\n";
}


void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow\n";
        return;
    }

    cout << "Deleted: " << cq[front] << endl;

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

// Display
void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue: ";

    int i = front;
    while (true) {
        cout << cq[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }

    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}