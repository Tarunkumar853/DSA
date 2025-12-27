//WAP in c++ to find the sum of two numbers.
// # include <bits/stdc++.h>
// using namespace std;
// int sum(int,int); //function Declaration
// int main()
// {
//     int a,b,c;
//     cout<<"Enter two no.";
//     cin>>a>>b;
//     c=sum(a,b); //function calling.  actual parameter is a,b /c is called calli.
//     cout<<"the sum of two no. is"<<c<<endl;
//     return 0;
// }
// int sum(int x,int y) //function defintion x,y are formal parameter.
// {
//     int z;
//     z=x+y;
//     return z; //it return the value to the calli
// }

//WAP in c++ to find the simple interest by function.
// # include <bits/stdc++.h>
// using namespace std;
// float interest(float,float,float);
// int main()
// {
//     float p,r,t,s;
//     cout<<"Enter the value of p,r,t";
//     cin>>p>>r>>t;
//     s= interest(p,r,t);
//     cout<<"Simple interest is"<< s <<endl;
//     return 0;
// }
// float interest(float x,float y, float z)
// {
//     float m,a;
//     m = (x*y*z)/100;
//     a=m+x;
//     return a;
// }

//WAP to check the given number is even or odd.
// # include <bits/stdc++.h>
// using namespace std;
// int check(int);
// int main()
// {
//     int a,d;
//     cin>>a;
//     d = check(a); 
//     return 0;
// }
// int check(int x)
// {
//     int c;
//     c=x;
//     if(c%2==0)
//     {
//         cout<<c<<" "<<"is Even number"<<endl;
//     }
//     else
//     {
//         cout<<c<<"is odd number"<<endl;
//     }
//     return c; 
// }

//WAP in c++ to find the factorial of given number.
// # include <bits/stdc++.h>
// using namespace std;
// int factorial(int n)
// {
//     int fact =1;
//     for(int i=1;i<=n;i++)
//         fact=fact*i;
//         return fact;
// }
// int main()
// {
//     int a,f;
//     cin>>a;
//     f=factorial(a);
//     cout<<f<<endl;
//     return 0;
// }

//WAP in c++ to check number is composite or loop.
// # include <bits/stdc++.h>
// using namespace std;
// bool prime(int n)
// {
//     for(int i=2;i<=(n-1);i++){
//         if(n % i == 0) return false;
//     }
//     return true;
// }
// int main()
// {
//     int a;
//     cin>>a;  
//     bool check = prime(a);
//     if(check==true)
//     {
//         cout<<"Number is prime"<<" "<<a<<endl;
//     }
//     else
//     {
//         cout<<"Number is composite"<<" "<<a<<endl;
//     }
//     return 0;
// }

//WAP in c++ to find the sum of digits.
// # include <bits/stdc++.h>
// using namespace std;
// int sum(int n)
// {
//     int b,sum=0;
//     for(int i=1;i<=n;i++)
//     {
//         b=n%10;
//         sum=sum+b;
//         n=n/10;
//     }
//     return sum;
// }
// int main()
// {
//     int a,s;
//     cin>>a;
//     s=sum(a);
//     cout<<"Sum of Digits is "<<" "<<s<<endl;
//     return 0;
// }

//WAP to check if it is palindrome or not.
// # include <bits/stdc++.h>
// using namespace std;
// int pali(int n)
// {   int b,rev_p=0;
//     while(n>0)
//     {
//         b=n%10;
//         rev_p=rev_p*10 + b;
//         n=n/10;
//     }
//     return rev_p;
// }
// int main()
// {
//     int a,p;
//     cin>>a;
//     p=pali(a);
//     if(p==a)
//     {
//         cout<<p<<" "<< "is palindrome"<<endl; 
//     }
//     else
//     {
//         cout<<p<<" "<< "is not palindrome"<<endl;
//     }
// }