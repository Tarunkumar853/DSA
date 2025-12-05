// # include <bits/stdc++.h>
// using namespace std;
//while loop
// int main()
// {
//     int n;
//     cin>>n;
//     int i;
//     while (i<=n){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }

//for while
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i;
//     for(i=1;i<=n;i++)
//     {
//         cout<<i<<endl;
//     }
//     return 0;
// }

//do-while loop
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {   
//     int n=10;
//     int i=1;
//     do
//     {       
//         cout<<i<<" "<<endl;
//         i++;
//     } while (i<=n);   
//     return 0;
// }

//Nested loop (Square Pattern)
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++){
//         cout<<j<<" ";}
//         cout<<endl;
//     }
//     return 0;
// }

//Nested Loop (Different Pattern) where rows are different and columns are different.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; //no. of rows
//     cin>>n;
//     int m; //no. of columns
//     cin>>m;
//     for (int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++){
//         cout<<j<<" ";}
//         cout<<endl;
//     }
//     return 0;
// }

//Nested loop (tranform int to character)
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; //no. of rows
//     cin>>n;
//     for (int i=0;i<n;i++)
//     {   char ch='A';
//         for(int j=0;j<n;j++)
//         {
//             cout<<ch<<" ";
//             ch= ch + 1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Nested loop for   Continous 
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; //no. of rows
//     cin>>n;
//     int num=1;
//     for (int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//nested loop (triangle pattern)
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i)
//     { 
//         for(int j=1;j<=(i+1);++j)
//         {
//             cout <<i+1<<" ";           
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//nested loop (tiangle pattern for ABC)
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char ch='A';

//for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         {
//             cout<<ch<<" ";
//         }
//         ch++;
//         cout<<endl;
//     }
//     return 0;
// }

//backward nested loop for numbers
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=n;i>0;i--)
//     {
//         for(int j=i+1;j>0;j--)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//flyod's triangle pattern
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char ch='A';
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         {
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//inverted triangle pattern with backward pattern
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num=1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=1;j<=i+1;j++)
//         {
//             cout<<j;
//         }
//         for(int j=i;j>=1;j--)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//function definition. we make any function and use for many different integers.
// int printHello() {
//     cout<<"hello\n";
//     return 4;
// }
// int main()
// {
//     //function call/invoke. It make thing easier for me.
//     int val = printHello();
//     cout<< "val is" << val << endl;
//     return 0;
// }

//sum of 1toN;
// int SumN(int N){
//     int sum=0;
//     for(int i=1;i<=N;i++){
//        sum+=i;
//     }
//     return sum;
// }

// int main()
// {
//     cout << SumN(55) <<endl;
//     return 0;
// }

//calculate the factorial of N!
// int factN(int N){
//     int fact =1; 
//     for(int i=1;i<=N;i++){
//         fact*=i;        
//     }
//     return fact;
// }
// int main()
// {
//     cout<<factN(5)<<endl;
// }

//using switch for checking even or odd:
// int main()
// {
//     int a;
//     cin>>a;
//     int n=a%2;
//     switch(n)
//     {
//         case 0:
//         cout<<"a is even"<<endl;
//         break;
//         default:
//         cout<<"odd"<<endl;
//     }
//     return 0;
// }

//using switch for vowel or constaint:
// int main()
// {
//     char ch;
//     cin>>ch;
//     switch(ch)
//     {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//         cout<<ch<<" is vowel"<<endl;
//         break;
//         default:
//         cout<<ch<<" is constaint"<<endl;
//     }
//     return 0;    
// }

//using switch for day week:
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     switch(n)
//     {
//         case 1:
//         cout<<"Monday"<<endl;
//         break;
//         case 2:
//         cout<<"Tuesday"<<endl;
//         break;
//         case 3:
//         cout<<"Wednesday"<<endl;
//         break;
//         case 4:
//         cout<<"Thursday"<<endl;
//         break;
//         case 5:
//         cout<<"Friday"<<endl;
//         break;
//         case 6:
//         cout<<"Saturday"<<endl;
//         break;
//         case 7:
//         cout<<"Sunday"<<endl;
//         break;
//         default:
//         cout<<"Please Enter between 1 to 7"<<endl;
//     }
//     return 0;
// }

//using switch write code for months
// int main()
// {
//     int n;
//     cin>>n;
//     switch(n)
//     {
//         case 1:
//         cout<<"January"<<endl;
//         break;
//         case 2:
//         cout<<"February"<<endl;
//         break;
//         case 3:
//         cout<<"March"<<endl;
//         break;
//         case 4:
//         cout<<"April"<<endl;
//         break;
//         case 5:
//         cout<<"May"<<endl;
//         break;
//         case 6:
//         cout<<"June"<<endl;
//         break;
//         case 7:
//         cout<<"July"<<endl;
//         break;
//         case 8:
//         cout<<"August"<<endl;
//         break;
//         case 9:
//         cout<<"September"<<endl;
//         break;
//         case 10:
//         cout<<"October"<<endl;
//         break;
//         case 11:
//         cout<<"November"<<endl;
//         break;
//         case 12:
//         cout<<"December"<<endl;
//         break;
//         default:
//         cout<<"Please enter between 1 to 12"<<endl;
//     }
//     return 0;
// }

//left & Right Shift operator
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int n,c;
//     // cin>>n;
//     // int a=12;
//     // // // c=a*n*n;
//     // a=a<<n; //left shift operator
//     // a=a>>n; //right shift operator 
//     // cout<<a<<endl;
//     for(int i=0;i<5;i++)
//     {
//         continue; //if you want to skip any iteration in loop
//         //break is like fufa ji who want to exit from loop or forcefully exiting from loop
//         cout<<"tarun";
//     }
// }

//Switch Case
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,value;
//     cin>>n;
//     value=n;
//     switch (value)
//     {
//         case 1: cout<<"Rahul";
//         break;
//         case 2: cout<<"Sohan";
//         break;
//         case 3: cout<<"Shankar";
//         break;
//         default: cout<<"babbar";
//         break;
//     }
//     cout<<endl;
// }

//fibonacci Series 
# include <bits/stdc++.h>
using namespace std;
int main()
{
    int size,i,f0=1,f1=2,f2;
    cin>>size;
    int a[size];
    cout<<"the fibonacci Series is"<<f0<<" "<<f1<<" ";
    for(i=0;i<size-2;i++)
    {
        f2=f0+f1;
        cout<<f2<<" ";
        f0=f1;
        f1=f2;
    }
    cout<<endl;
    return 0;
}

//Find the sum of following sums
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //1
//     int n,i,j;
//     char ch='x';
//     float sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,fact=1;
//     cin>>n;
//     for(i=1;i<n;i++)
//     {
//         sum1=sum1+sqrt(i);
//         sum2=sum2+pow(i,i);
//         sum3=sum3+pow(i,2);
//         sum5=sum5+(1/sqrt(i));
//     }
//     for(j=1;j<=n;j++)
//     {
//         fact=fact*j;
//         sum6=sum6+(1/fact);
//         sum4=sum4+(1/fact);
//     }
//     // }
//     cout<<"1st Series"<<" "<<sum1<<" "<<endl;
//     cout<<"2nd Series"<<" "<<sum2<<" "<<endl;
//     cout<<"3rd Series"<<" "<<sum3<<" "<<endl;
//     cout<<"4th Series"<<" "<<sum4<<" "<<endl;
//     cout<<"5th Series"<<" "<<sum5<<" "<<endl;
//     cout<<"6th Series"<<" "<<sum6<<" "<<endl;
//     return 0;
// }
// //A buzz number is a number that either ends with the digit 7 or is divisible by 7.


