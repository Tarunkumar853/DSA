#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, m, y, x;

    cin >> d >> m >> y;
    cin >> x;

    while (x > 0) {

        int mdm;

        if (m == 2) {
            if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
                mdm = 29;
            else
                mdm = 28;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11) {
            mdm = 30;
        }
        else {
            mdm = 31;
        }

        if (d < mdm) {
            d++;
        }
        else {
            d = 1;

            if (m < 12) {
                m++;
            }
            else {
                m = 1;
                y++;
            }
        }

        x--;
    }

    cout << setfill('0') << setw(2) << d
         << setw(2) << m
         << setw(4) << y << endl;

    return 0;
}