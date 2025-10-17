#include <iostream>
using namespace std;

int main() {
    int l,b,h;
    cout << "Enter the Length: ";
    cin >> l;
    cout << "Enter the Breadth: ";
    cin >> b;
    cout << "Enter the Height: ";
    cin >> h;
    int volume = l * b * h;

    cout << "The volume of the cuboid is " << volume << endl;
    return 0;
}
