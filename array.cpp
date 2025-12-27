//Sum of Array
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[10],i,sum=0;
//     for(i=0;i<10;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<10;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     for(i=0;i<10;i++)
//     {
//         sum=sum+a[i];
//     }
//     cout<<"Sum of Array is"<<" "<<sum<<endl;
//     return 0;
// }

//Average
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[10],i,sum=0;
//     double avg;
//     for(i=0;i<10;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<10;i++)
//     {
//         sum=sum+a[i];
//     }
//     avg=sum/10.0;
//     cout<<avg<<endl;
//     return 0;
// }

//Max 
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,a[10];
//     for(i=0;i<10;i++)
//     {
//         cin>>a[i];
//     }
//     int max=a[0];
//     for(i=1;i<10;i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//     }
//     cout<<max<<endl;
//     return 0;
// }

//Even Number
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,a[10],even=0,odd=0,e,o;
//     for(i=0;i<10;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<10;i++)
//     {
//         if(a[i]%2==0)
//         {
//             e=a[i];
//             even++;
//         }
//     }
//     cout<<endl;
//     for(i=0;i<10;i++)
//     {
//         if(a[i]%2!=0)
//         {
//             o=a[i];
//             odd++;
//         }
//     }
//     cout<<endl;
//     cout<<"Even Elements:"<<" "<<e<<endl;
//     cout<<"odd elements:"<<" "<<o<<endl;
//     cout<<"Total Even Elements"<<even<<endl;
//     cout<<"Total odd elements"<<odd<<endl;
//     return 0;
// }

// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[5]={1,3,5,7,9};
//     for(int i=1;i<=5;i++)
//      {
//         arr[i]=1;
//      }
//      for(int i=1;i<=5;i++)
//      {
//         cout<<arr[1]<<" ";
//      }
//     cout<<endl;
//     return 0;
// }

//armstrong number checking 
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int l,u,ctr=0;
//     cin>>l>>u;
//     for(int i=l;i<=u;i++)
//     {
//       int n=i;
//       string s= to_string(i); //convert integer into string
//       int len=s.length();
//       int sum=0;
//       while(n>0)
//       {
//          int R=n%10;
//          n=n/10;
//          sum=sum+ (int)pow(R,len);
//       }
//       if(sum==i)
//       {
//          cout<<i<<" ";
//          ctr++;
//       }
//     }
//     cout<<endl;
//     if(ctr==0)
//     {
//       cout<<"-1"<<endl;
//     }
//     return 0;  
// }

//jumping number
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int num;
//    cin>>num;
//    for(int i=0;i<=num;i++)
//    {
//       string s=to_string(i);
//       int len=s.length();
//       if(len==1)
//       {
//          cout<<i<<" ";
//       }
//       else if(s[len-1]-s[len-2]==1||s[len-2]-s[len-1] ==1)
//       {
//          cout<<i<<" ";
//       }
//    }
//    cout<<endl;
//    return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int i, n1,n2,k,num,copy; int sum=0;
//     cout<<"Enter the upper and lower value"<<endl;
// 	cin>>n1>>n2;	
//    i=n1;
// 	while(i<=n2)
// 	{
//       int sum=0;
// 	    copy=i;
// 	    k=0;
// 	    while(copy>0)
// 	    {
// 	    copy=copy/10;
// 	    k++;
// 	    }
// 	    copy=i;
// 	    while(copy>0)
// 	    {
// 	        int digit=copy%10;
// 	       sum=sum+ pow(digit,k);
// 	        copy=copy/10;
// 	    }
// 	    if(sum==i)
// 	    {
// 	        cout<<i<<" ";
// 	        i++;
// 	    }
// 	else{
// 	    i++;
// 	}
// 	}	
// return 0;
// }

//Sum after Merging of Middle Element
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n ;
//     vector <int> r(n),b(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>r[i];
//     }
//     for(int j=0;j<n;j++)
//     {
//         cin>>b[j];
//     }
//     vector <int> ans;
//     int i=0,j=0;
//     while(i<n && j<n)
//     {
//         if(r[i]<=b[j])
//         {
//             ans.push_back(r[i]);
//             i++;
//         }
//         else
//         {
//             ans.push_back(b[j]);
//             j++;
//         }
//     }
//     while(j<n)
//     {
//         ans.push_back(b[j]);
//         j++;
//     }
//     while(i<n)
//     {
//         ans.push_back(r[i]);
//         i++;
//     }
//     int sum=(ans[n-1]+ans[n]);
//     cout<<"After the  Merging the sum of Middle Elements is : "<<(float)sum<<endl;
//     return 0;
// } 

//Giving Highest Marks Highest Position
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int v[n];
//     for(int i=0;i<n;i++) {
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++){
//         int position=1;
//         for(int j=0;j<n;j++){
//             if(v[j]>v[i]){
//                 position++;
//             }
//         }
//         cout<<position<<" ";
//     }
//     cout<<endl;
// }

//Move all -ve number to left side of an array
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<arr.size();i++)
//     {
//         cin>>arr[i];
//     }
//     int l=0,m=0,h=arr.size()-1;
//     while(m<=h)
//     {
//         if(arr[m]<0)
//         {
//             swap(arr[l],arr[m]);
//             l++,m++;
//         }
//         else m++;
//     }
//     for(int i:arr)
//     cout<<i<<" ";
//     cout<<endl;
// }

//finding Duplicate number
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0 ;i<arr.size();i++)
//     {
//         cin>>arr[i];
//     }
    //negative marking method
    // int ans= -1;
    // for(int i=0;i<arr.size();i++)
    // {
    //     int index = abs(arr[i]);
    //     if(arr[index]<0)
    //     {
    //         ans = index;
    //         break;
    //     }
    //     arr[index] *= -1;
    // }
    // cout<<ans<<endl;
    //
    //positioning method
//     while(arr[0]!=arr[arr[0]])
//     {
//         swap(arr[0],arr[arr[0]]);
//     }
//     cout<<arr[0]<<endl;
// }

//Missing elements from an array with duplicates
// # include <bits/stdc++.h>
// using namespace std;
// void findmissing(int arr[], int n){
//     // for(int i=0; i<n;i++){
//     //     int index = abs(arr[i]);
//     //     if(arr[index-1]>0){
//     //         arr[index-1]*= -1;
//     //     }
//     // }
//     // for(int i=0; i<n; i++){
//     //     if(arr[i]>0)
//     //     {
//     //         cout<<i+1<<" ";
//     //     }
//     // }
//     // cout<<endl;
//
//     int i=0;
//     while(i<n)
//     {
//         int index = arr[i]-1;
//         if(arr[i]!=arr[index])
//         {
//             swap(arr[i], arr[index]);
//         }
//         else i++;
//     }
//     for(int i =0;i<n;i++)
//     {
//        if(arr[i]!=(i+1))
//        {
//         cout<<(i+1)<<" ";
//        }
//     }
//     cout<<endl;
// }
// int main()
// {
//     int arr[]={4,3,3,5,3,7,4};
//     int n=sizeof(arr)/sizeof(int);
//     findmissing(arr,n);
//     return 0;
// }

//Find the first repeating element

