#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int n = 4;
    int m = 4;

    int ans[100];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m) {

        if (arr1[i] <= arr2[j]) {
            ans[k] = arr1[i];
            i++;
        }
        else {
            ans[k] = arr2[j];
            j++;
        }

        k++;
    }

    while (i < n) {
        ans[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        ans[k] = arr2[j];
        j++;
        k++;
    }

    for (int x = 0; x < k; x++) {
        cout << ans[x] << " ";
    }

    return 0;
}
