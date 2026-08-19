#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums1[] = {1, 2, 2, 3, 4};
    int nums2[] = {2, 3, 5, 6};

    int n = 5;
    int m = 4;

    int ans[100];
    int k = 0;

    int i = 0;
    int j = 0;

    while (i < n && j < m) {

        if (nums1[i] < nums2[j]) {
            if (k == 0 || ans[k - 1] != nums1[i]) {
                ans[k] = nums1[i];
                k++;
            }
            i++;
        }

        else if (nums2[j] < nums1[i]) {
            if (k == 0 || ans[k - 1] != nums2[j]) {
                ans[k] = nums2[j];
                k++;
            }
            j++;
        }

        else {
            // Both elements are equal
            if (k == 0 || ans[k - 1] != nums1[i]) {
                ans[k] = nums1[i];
                k++;
            }

            i++;
            j++;
        }
    }

    while (i < n) {
        if (k == 0 || ans[k - 1] != nums1[i]) {
            ans[k] = nums1[i];
            k++;
        }
        i++;
    }

    while (j < m) {
        if (k == 0 || ans[k - 1] != nums2[j]) {
            ans[k] = nums2[j];
            k++;
        }
        j++;
    }

    for (int x = 0; x < k; x++) {
        cout << ans[x] << " ";
    }

    return 0;
}
