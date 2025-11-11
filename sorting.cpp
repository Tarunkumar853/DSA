// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size,i,j,temp;
//     cin>>size;
//     int a[size];
//     cout<<"Enter Array elements";
//     for(i=0;i<size;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<size;i++)
//     {
//         for(j=0;j<size-i-1;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
        
//     }
//     cout<<temp<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size,i,j,temp;
    cin >> size;
    int a[size];

    cout << "Enter array elements: ";
    for(i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    // Bubble sort
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for(i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
