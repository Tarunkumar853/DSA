#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 5};

    int n = 5;
    int m = 4;

    int ans[100];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m) {

        if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            j++;
        }
        else {
            if (k == 0 || ans[k - 1] != arr1[i]) {
                ans[k] = arr1[i];
                k++;
            }

            i++;
            j++;
        }
    }

    for (int x = 0; x < k; x++) {
        cout << ans[x] << " ";
    }

    return 0;
}
