// # include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     priority_queue<int ,vector<int>, greater<int>> pq;

//     pq.push(5);
//     pq.push(2);
//     pq.push(8);
//     pq.push(1);
//     pq.push(4);

//     cout << "Highest Priority Element: ";
//     cout << pq.top() << endl;

//     cout<<"Is empty: ";
//     cout << (pq.empty() ? "Yes" : "No") << endl;

//     cout << "Deleting elements: ";

//     while (!pq.empty()) {
//         cout << pq.top() << " ";  
//         pq.pop();                 
//     }

//     cout << endl;

//     cout << "Is Empty After Deletion: ";
//     cout << (pq.empty() ? "Yes" : "No") << endl;

//     return 0;

// }

#include <bits/stdc++.h>
using namespace std;

class PriorityQueue {
    int arr[100];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    void insert(int x) {
        if (size == 100) {
            cout << "Priority Queue is Full\n";
            return;
        }

        arr[size] = x;
        size++;
    }

    void deleteElement() {
        if (size == 0) {
            cout << "Priority Queue is Empty\n";
            return;
        }

        int minIndex = 0;

        // Find smallest element
        for (int i = 1; i < size; i++) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }

        cout << "Deleted: " << arr[minIndex] << endl;

        for (int i = minIndex; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    void display() {
        if (size == 0) {
            cout << "Priority Queue is Empty\n";
            return;
        }

        cout << "Priority Queue: ";

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    void peek() {
        if (size == 0) {
            cout << "Priority Queue is Empty\n";
            return;
        }

        int minIndex = 0;

        for (int i = 1; i < size; i++) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }

        cout << "Highest Priority: " << arr[minIndex] << endl;
    }

    // Check empty
    bool isEmpty() {
        return size == 0;
    }

    // Get size
    int getSize() {
        return size;
    }
};

int main() {

    PriorityQueue pq;

    pq.insert(5);
    pq.insert(2);
    pq.insert(8);
    pq.insert(1);
    pq.insert(4);

    pq.display();

    pq.peek();

    pq.deleteElement();
    pq.display();

    pq.deleteElement();
    pq.display();

    pq.deleteElement();
    pq.display();

    cout << "Size: " << pq.getSize() << endl;

    return 0;
}