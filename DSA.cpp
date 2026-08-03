#include <bits/stdc++.h>
using namespace std;

// bool isPossibleSolution(vector<int>& nums, long long int n, long long int m, long long int mid)
// {
//     long long int woodSum = 0;
//     for(int i = 0; i<n; i++)
//     {
//         if(nums[i]> mid)
//         {
//             woodSum = woodSum + (nums[i] - mid);
//         }
//     }
//     return woodSum >= m;
// }

// int main() {
//     vector<int> nums = {4,42,40,26,46};
//     int n = nums.size();
//     long long int m = 20;
//     // int k = 3;
//     // // while(k>0)
//     // // {
//     // //     int temp = nums[n-1];
//     // //     for(int i = n-2; i>=0; i--)
//     // //     {
//     // //         nums[i+1] = nums[i];
//     // //     }

//     // //     nums[0] = temp;

//     // //     k--;
//     // // }
//     // int arr[n];
//     // for(int i=0; i<n; i++)
//     // {
//     //     arr[(i+k)%n] = nums[i];
//     // }

//     // cout<<"After 3 steps the Array is :"<<endl;
//     // for(int i=0;i<n;i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
//     // cout<<endl;

//     //1748.
// //     vector<int> nums = {1,2,3,2};
// //     int n = nums.size();
// //     int sum = 0;
    
// //     for(int i=0; i<n;i++)
// //     {
// //         for(int j=0; j<n;j++)
// //         {
// //             if((nums[i]^nums[j])!= 0)
// //             {
// //                 sum+=nums[i];
// //             }
// //         }
// //     }

// //     cout<<sum<<endl;

// // Maximun product of subarray
//     // int ans;
//     // for(int i=0; i<n ;i++)
//     // {
//     //     for(int j=0; j<=i; j++)
//     //     {
//     //         cout<<nums[j];
//     //     }
//     //     cout<<" ";
//     // }

// // Bubble Sort
//     // for(int i=0; i<n-1; i++)
//     // {
//     //     for(int j = 0; j<n-i-1;j++)
//     //     {
//     //         if(nums[j]>nums[j+1])
//     //         {
//     //             int temp = nums[j];
//     //             nums[j] = nums[j+1];
//     //             nums[j+1] = temp;
//     //         }

//     //     }
//     // }

// //selection sort
//     // for(int i=0; i<n-1; i++)
//     // {
//     //     int index = i;
//     //     for(int j = i+1; j<n; j++)
//     //     {
//     //         if(nums[j]<nums[index])
//     //         {
//     //             index = j;
//     //         }
//     //     }

//     //     int temp = nums[i];
//     //     nums[i] = nums[index];
//     //     nums[index] = temp;
//     // }

// //Insertion Sort
//     // for(int i=1; i<n; i++)
//     // {
//     //     int curr = nums[i];
//     //     int prev = i-1;
//     //     while(prev >= 0 && nums[prev] > curr)
//     //     {
//     //         nums[prev+1] = nums[prev];
//     //         prev--;
//     //     }
//     //     nums[prev+1] = curr;
//     // }

//     // for(int i=0; i<n; i++)
//     // {
//     //     cout<<nums[i]<<" ";
//     // }
//     // cout<<endl;

//     long long int start = 0;
//     long long int end = *max_element(nums.begin(), nums.end());
//     long long int ans = -1;
    
//     while(start<=end)
//     {
//         long long int mid = start + (end - start)/2;

//         if(isPossibleSolution(nums , n, m, mid)){
//             ans = mid;
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }
//     cout<<ans<<endl;

//     return 0;
// }

// bool checkPalindrome(string curr)
// {
//     int i = 0;
//     int j = curr.size()-1;

//     while(i<j)
//     {
//         if(curr[i] != curr[j])
//         {
//             return false;
//         }
//         else{
//             i++;
//             j--;
//         }
//     }
//     return true;
   
// }

// int main()
// {
//     string s = {"aaa"};
//     int n = s.size();
//     int count = 0;
//     for(int i=0; i<n;i++)
//     {
//        for(int j=1; j<=n-i; j++)
//        {
//         string curr = s.substr(i,j);

//         if(checkPalindrome(curr))
//         {
//             count++;
//         }
//        }
//     }
//     cout<<count<<endl;
//     return 0;
// }

// int main()
// {
//     string s = "listen";
//     string t = "silent";
//     vector<int> count(26, 0);

//     for(int i=0; i<s.length(); i++)
//     {
//         count[s[i]- 'a']++;
//     }

//     for(int i=0; i<t.size(); i++)
//     {
//         count[t[i] - 'a']--;
//     }

//     for(int i=0 ; i<26; i++)
//     {
//         if(count[i] != 0)
//         {
//             cout<<"this is not anagram"<<endl;
//             return 0;
//         }
//     }
//     cout<<"this is anagram"<<endl;;

// }

// int main()
// {
//     string s = "91283472332";
//     int n = s.length();
//     long long int result = 0;
//     int sign = 1;
//     bool signTaken = false;
//     bool numberStarted = false;
//     int digit = 0;

//     for(int i=0; i<n; i++)
//     {
//         if(isspace(s[i]) && !signTaken && !numberStarted)
//         {
//             continue;
//         }
//         else if(s[i] == '-' && !signTaken && !numberStarted)
//         {
//             sign = -1;
//             signTaken = true;
//         }
//         else if(s[i] == '+' && !signTaken && !numberStarted)
//         {
//             sign = 1;
//             signTaken = true;
//         }
//         else if(isdigit(s[i])){
//             if(result > INT_MAX/10 || (result == INT_MAX/10 && digit > 7))
//             {
//                 cout<<INT_MAX<<endl;
//                 return 0;
//             }
//             else{
//                 digit = s[i] - '0';
//                 numberStarted = true;
//                 result = result*10 + digit;
//             }
//         }
//         else{
//             break;
//         }
//     }
//     cout<<result*sign<<endl;

// }

int main()
{
    vector<int> arr = {4,1,6,2};
    vector<int> prefix(arr.size(),0);
    int sum = 0;
    for(int i=0 ; i<arr.size(); i++)
    {
        sum += arr[i];
        prefix[i] = sum;
    }
    int l = 1;
    int r = 3;

    cout<<prefix[r] - prefix[l-1]<<endl;
}