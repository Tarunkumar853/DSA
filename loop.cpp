//WAP to use loop for sum
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,sum=0,a;
//     cin>>n;
//     while(n>0)
//     {
//         a=n%10; //slicing
//         sum=sum+a; //separating
//         n=n/10;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

//WAP to use loop for reverse the digit
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,rev=0,a;
//     cin>>n;
//     while(n>0)
//     {
//         a=n%10; //slicing
//         rev=rev*10+a; //adding
//         n=n/10;
//     }
//     cout<<rev<<endl;
//     return 0;
// }

//WAP to Palindrome number
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,rev=0,a,m;
//     cin>>n;
//     m=n;
//     while(n>0)
//     {
//       a=n%10;
//       rev=rev*10+a; 
//       n=n/10;  
//     }
//     if(rev==m) cout<<"No. is palindrome"<<endl;
//     else cout<<"No is not Palindrome"<<endl;
//     return 0;
// }

//WAP to Armstrong 
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,arm=0,a;
//     cin>>n;
//     while(n>0)
//     {
//         a=n%10; //slicing
//         arm=arm+pow(a,3); //taking power of number of digitx
//         n=n/10;
//     }
//     cout<<arm<<endl;
//     return 0;
// }

//WAP to print even number between 1 to 50.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i=1,n,sum=0;
//     cin>>n;
//     while(i<=n)
//     {
//         if(i%2==0)
//         {
//         cout<<i<<endl;
//         }
//         i++;
//     }
//     return 0;
// }

//WAP to find the factorial with while loop.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a,fact=1;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         fact=fact*i; 
//         i++;
//     }
//     cout<<fact<<endl;
//     return 0;
// }

//WAP Count the digits in a given number by me
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,sum=0,a,c;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         a=n%10; //n mai se single digit milegi
//         c=a/a; //mujhe always 1 milege
//         sum=sum+c;//ye digits ko add karega
//         n=n/10;//meri n wale kam hoti jayegi
//         i++;
//     }
//     cout<<sum<<endl;   
// }

//Wap Find the sum of digits of a number.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a,sum=0;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         a=n%10;
//         sum=sum+a;
//         n=n/10;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

//WAP Print all alphabets from A to z.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char ch='a';
//     while(ch<='z')
//     {
//         cout<<ch<<" ";
//         ch++;
//     }
//     cout<<endl;
//     return 0;
// }

//Wap to Print squares of first 10 natural numbers.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         cout<<pow(i,2)<<" ";
//         i++;
//     }
//     cout<<endl;
//     return 0;
// }

//wap to Find the sum of even digits in a given number.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,sum=0;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {   
//         if(i%2==0)
//         {
//             sum=sum+i;
//         }  
//         i++;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

//WAP Count the digits in a given number by chatgpt
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,count=0;
//     cin>>n;
//     while(n>0)
//     {
//        n=n/10;
//        count++;
//     }
//     cout<<count<<endl;
//     return 0;
// }

//wap Print all numbers from N down to 1.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     while(n>0)
//     {
//         cout<<n<<" ";
//         n--;
//     }
//     cout<<endl;
//     return 0;
// }

//wap to print squares of first 10 natural numbers;
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         cout<<i*i<<" ";
//         i++;
//     }
//     cout<<endl;
//     return 0;
// }

//wap to find the sum of odd digtis in a given number.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,sum=0;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         if(i%2!=0)
//         {
//             sum=sum+i;
//         }
//         i++;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

//wap to count how many even digits are in a number.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,count=0,c,a;
//     cin>>n;
//     while(n>0)
//     {
//         c=n%10;
//         if(c%2==0)
//         {
//             count++;            
//         }  
//         n=n/10; 
//     }
//     cout<<count<<endl;
//     return 0;
// }

//wap to check if a number is palindrome (reverse == original).
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int n,rev=0,a;
//    cin>>n;
//    while(n>0)
//    {
//       a=n%10;
//       rev=rev*10+a;
//       n=n/10;
//       if(rev==n)
//       cout<<"it is palindrome";
//    }
//    cout<<"it is not palindrome";
//    cout<<endl;
//     return 0;
// }

//wap to Check if a number is an Armstrong number.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,count=0,a,arm=0;
//     cin>>n;
//     int c=n;
//     while(c>0)
//     {
//         c=c/10;
//         count++;
//     }
//     c=n;
//     while(c>0)
//     {
//         a=c%10;
//         arm=arm+pow(a,count);
//         c=c/10;
//     }
//     if(n==arm)
//     {
//         cout<<arm<<" is armstrong number";
//     }
//     else 
//     cout<<arm<<" is not a armstrong number";
//     return 0;
// }

//Wap to find the largest digit in a number.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a,lar=0;
//     cin>>n;
//     while(n>0)
//     {
//         a=n%10;
//         if(a!>lar)
//         {}
//         n=n/10;
//     }
//     cout<<lar<<endl;
//     return 0;
// }

// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,fact=1;
//     cin>>n;
//     while(n>0)
//     {
//         fact=fact*n;
//         n--;
//     }
//     cout<<fact<<endl;
//     return 0;
// }

