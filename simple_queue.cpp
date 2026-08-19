#include <bits/stdc++.h>
using namespace std;

queue<int> q;

void insert(int x) {
    q.push(x);
    cout << x << " inserted into the queue.\n";
}

void deletion() {
    if (q.empty()) {
        cout << "Queue is empty. Cannot delete.\n";
        return;
    }

    cout << q.front() << " deleted from the queue.\n";
    q.pop();
}

void display() {
    if (q.empty()) {
        cout << "Queue is empty.\n";
        return;
    }

    queue<int> temp = q;

    cout << "Queue: ";
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
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
                int x;
                cin>>x;
                insert(x);
                break;

            case 2:
                deletion();
                break;

            case 3:
                display();
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 3);
}