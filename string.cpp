//getting size of string
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str="i am the best";
//     // cout<<str.size()<<endl; //give the size of the string.
//     // cout<<str.length()<<endl; //give the same output as size 
//     return 0;
// }

//triangle using string
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="*";
//      for(int i=1;i<=5;i++)
//      {
//         cout<<string (i,'*') <<endl;
//      }
//      return 0;
// }

//separting letter,digits,special
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="AB1ze$CD49f#";
//     string letter="" , digit="" , special="";
//     for(char c : s)
//     {
//         if(isalpha(c))
//         letter=letter+c;
//         else if(isdigit(c))
//         digit=digit+c;
//         else
//         special=special+c;
//     }
//     cout<<"Letter = "<<letter<<endl;
//     cout<<"Digits = "<<digit<<endl;
//     cout<<"Special = "<<special<<endl;
//     return 0;
// }

//sub-string
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="helloWorld";
//     string sub =s.substr(0,3);
//     cout<<sub<<endl;
//     return 0;
// }

// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     cin>>str;
//     for(int i=str.size()-1;i>=0;i--)
//     {
//         str.push_back(str[i]);
//     }
//     cout<<endl;
//     return 0;
// }

//WAP to find a student is simple or complex
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int sum=0;
//     int a;
//     string str="tanay";
//     for(char ch : str)
//     {
//         a = int(ch);
//         sum=sum+a;
//     }
//     if (sum%2==0)
//     cout<<"simple"<<endl;
//     else
//     cout<<"unique"<<endl;
//     return 0;
// }

// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str="123";
//     int sum=0;
//     for(char ch :str)
//     {
//         if(isdigit(ch))
//         {
//             sum+=ch-'0';
//         }
//     }
//     cout<<sum<<endl;
//     return 0;
// }

# include <bits/stdc++.h>
using namespace std;
int main()
// {
//     string s1,s2;
//     cin>>s1>>s2;
//     int n1=stoi(s1);
//     int n2=stoi(s2);
//     cout<<n1+n2<<endl;
//     return 0;
// }
{
    string s1,s2;
    cin>>s1>>s2;
    int num1,num2;
    for(char ch :s1)
    {
        num1=ch-'0';
        num1=num1*10 + num1;
    }
    for(char ch : s2)
    {
        num2=ch-'0';
        num2=num2*10 + num2;
    }
    cout<<num1+num2<<endl;
    return 0;
}