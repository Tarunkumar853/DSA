// #include <bits/stdc++.h>
// using namespace std;

// class Deque {
//     char arr[100];
//     int front, rear, size;

// public:
//     Deque(int n) {
//         size = n;
//         front = -1;
//         rear = -1;
//     }

//     bool isEmpty() {
//         return front == -1;
//     }

//     bool isFull() {
//         return (front == 0 && rear == size - 1) || (front == rear + 1);
//     }

//     void insertFront(char x) {
//         if (isFull()) {
//             cout << "Deque is Full\n";
//             return;
//         }

//         if (isEmpty()) {
//             front = rear = 0;
//         }
//         else if (front == 0) {
//             front = size - 1;
//         }
//         else {
//             front--;
//         }

//         arr[front] = x;
//     }

//     void insertRear(char x) {
//         if (isFull()) {
//             cout << "Deque is Full\n";
//             return;
//         }

//         if (isEmpty()) {
//             front = rear = 0;
//         }
//         else if (rear == size - 1) {
//             rear = 0;
//         }
//         else {
//             rear++;
//         }

//         arr[rear] = x;
//     }

//     void deleteFront() {
//         if (isEmpty()) {
//             cout << "Deque is Empty\n";
//             return;
//         }

//         if (front == rear) {
//             front = rear = -1;
//         }
//         else if (front == size - 1) {
//             front = 0;
//         }
//         else {
//             front++;
//         }
//     }

//     void deleteRear() {
//         if (isEmpty()) {
//             cout << "Deque is Empty\n";
//             return;
//         }

//         if (front == rear) {
//             front = rear = -1;
//         }
//         else if (rear == 0) {
//             rear = size - 1;
//         }
//         else {
//             rear--;
//         }
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Deque is Empty\n";
//             return;
//         }

//         int i = front;

//         while (true) {
//             cout << arr[i] << " ";

//             if (i == rear)
//                 break;

//             i = (i + 1) % size;
//         }

//         cout << endl;
//     }
// };

// int main() {
//     Deque dq(5);

//     dq.insertFront('A');
//     dq.insertRear('B');
//     dq.insertFront('C');
//     dq.deleteRear();
//     dq.insertFront('D');
//     dq.insertFront('E');


//     dq.display();

//     return 0;
// }


//Linked List

#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node* next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};

class Deque {
    Node* front;
    Node* rear;

public:
    Deque() {
        front = rear = NULL;
    }

    // Insert at left / front
    void insertLeft(char x) {
        Node* newNode = new Node(x);

        if (front == NULL) {
            front = rear = newNode;
            newNode->next = front;
        }
        else {
            newNode->next = front;
            front = newNode;
            rear->next = front;
        }
    }

    // Insert at right / rear
    void insertRight(char x) {
        Node* newNode = new Node(x);

        if (front == NULL) {
            front = rear = newNode;
            newNode->next = front;
        }
        else {
            newNode->next = front;
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Delete from left / front
    void deleteLeft() {
        if (front == NULL) {
            cout << "Deque is Empty\n";
            return;
        }

        if (front == rear) {
            delete front;
            front = rear = NULL;
        }
        else {
            Node* temp = front;
            front = front->next;
            rear->next = front;
            delete temp;
        }
    }

    // Delete from right / rear
    void deleteRight() {
        if (front == NULL) {
            cout << "Deque is Empty\n";
            return;
        }

        if (front == rear) {
            delete rear;
            front = rear = NULL;
        }
        else {
            Node* temp = front;

            while (temp->next != rear) {
                temp = temp->next;
            }

            temp->next = front;
            delete rear;
            rear = temp;
        }
    }

    void display() {
        if (front == NULL) {
            cout << "Deque is Empty\n";
            return;
        }

        Node* temp = front;

        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != front);

        cout << endl;
    }
};

int main() {

    deque<char> dq;

    dq.push_back('A');

    dq.push_back('B');
    dq.push_front('C');

    dq.pop_back();

    dq.push_front('D');

    dq.push_front('E');

    for (char x : dq) {
        cout << x << " ";
    }
    cout<<endl;

    return 0;
}