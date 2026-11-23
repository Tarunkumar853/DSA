#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node* links[26] = {};
    bool end = false;
};

Node* root = new Node();

void insert(string word) {
    Node* node = root;

    for (char ch : word) {
        int idx = ch - 'a';

        if (node->links[idx] == nullptr) {
            node->links[idx] = new Node();
        }

        node = node->links[idx];
    }

    node->end = true;
}

bool search(string word) {
    Node* node = root;

    for (char ch : word) {
        int idx = ch - 'a';

        if (node->links[idx] == nullptr)
            return false;

        node = node->links[idx];
    }

    return node->end;
}

bool startsWith(string prefix) {
    Node* node = root;

    for (char ch : prefix) {
        int idx = ch - 'a';

        if (node->links[idx] == nullptr)
            return false;

        node = node->links[idx];
    }

    return true;
}

int main() {
    insert("apple");

    cout << boolalpha;

    cout << search("apple") << endl;
    cout << search("app") << endl;
    cout << startsWith("app") << endl;

    insert("app");

    cout << search("app") << endl;

    return 0;
}