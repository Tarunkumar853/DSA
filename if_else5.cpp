// WAP in C++ to check two number is divisble by 2 or not.

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        
        if ((A+B)%2!=0 || (C+B)%2!=0 ||(A+C)%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else cout <<"No"<<endl;
    }

}  