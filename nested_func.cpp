//pass by value
// # include <bits/stdc++.h>
// using namespace std;
// void printArray(int arr[], int size)
// {
//     int copy[5];
//     for(int i=0;i<=size;i++)
//     {
//         copy[i]=arr[i];
//     }
//     cout<<"Before Function call"<<" ";
//     for(int i=0;i<size;i++)
//     {
//         cout<<copy[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int arr[2] = {2,5};
//     printArray(arr,2);
//     cout<<"After the function call"<<" ";
//     for(int i=0;i<2;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

//pass by reference
// # include <bits/stdc++.h>
// using namespace std;
// void modify(int a[],int size)
// {
//     // a[0]=10;
//     // a[1]=20;
//     // a[2]=30;
//     // a[3]=40;
//     // a[4]=50;
//     for(int i=0; i<size; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int a[5]={1,2,3,4,5};
//     int size=5;
//     modify(a,5);
//     cout<<"Before"<<" ";
//     for(int i=0;i<size;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

//linear search
// # include <bits/stdc++.h>
// using namespace std;
// bool search(int arr[],int size,int item)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==item)
//         {
//             return true;
//         }
//     }
//     return false; 
// }
// int main()
// {
//     int arr[5]={1,3,5,7,9};
//     int size=5;
//     int item;
//     cout<<"Enter the value of find"<<endl;
//     cin>>item;
//     if(search(arr,size,item))
//     {
//         cout<<"found"<<endl;
//     }
//     else
//     {
//         cout<<"Not Found"<<endl;
//     }
// }

//Counts 0's and 1's 
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[]={0,1,0,0,1,0,1,0,1,0,1,0};
//     int size = 12;
//     int Numzero=0;
//     int Numone=0;
//     for(int i=0;i<size;i++)
//     {
//         if(a[i]==0)
//         {
//             Numzero++;
//         }
//         else
//         {
//             Numone++;
//         }
//     }
//     cout<<"Number of 0's"<<" "<<Numzero++<<endl;
//     cout<<"Number of 1's"<<" "<<Numone++<<endl;
// }

//Maximum number in Array
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Number Store"<<endl;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int maxnum=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]>maxnum)
//         {
//             maxnum=a[i];
//         }
//     }
//     cout<<maxnum<<endl;
// }

//Extreme Print in Array;
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[]={1,2,3,4,5,6,7};
//     int size= 7;
//     int start=0;
//     int end=size-1;
//     while(start<=end)
//     {
//         if(start==end)
//         {
//             cout<<a[start];
//         }
//         else{
//             cout<<a[start]<<" ";
//             cout<<a[end]<<" ";
//         }
//         start++;
//         end--;
//     }
//     cout<<endl;
// }

//Reverse an Array
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={10,20,30,40,50,60};
//     int size = 6;
//     cout<<"Before reverse"<<" ";
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int start=0;
//     int end=size-1;
//     while (start<=end)
//     {
//        swap(arr[start],arr[end]);
//        start++;
//        end--;
//     }
//     cout<<"After Reverse"<<" ";
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl; 
// }




