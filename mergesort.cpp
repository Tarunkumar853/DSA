#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int r)
{
    int n = mid - l + 1;
    int m = r - mid;

    vector<int> left(n);
    vector<int> right(m);

    for (int i = 0; i < n; i++)
        left[i] = arr[l + i];

    for (int j = 0; j < m; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n && j < m)
    {
        if (left[i] < right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while (i < n)
        arr[k++] = left[i++];

    while (j < m)
        arr[k++] = right[j++];
}

void mergeSort(vector<int>& arr, int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    vector<int> arr = {3, 1, 4, 2, 7, 6, 5};

    mergeSort(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}
