//factorial
# include <bits/stdc++.h>
using namespace std;


int DAT[1001];
// int factorial(int n)
// {
//     if(n==1 || n == 0)
//     {
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }

// int power(int b, int p)
// {
//     if(p == 0) return 1;

//     return b*power(b,p-1);
// }

int fibo(int n)
{
    if(n == 1 || n ==2 ) return DAT[n] = n - 1;

    else{
        if(DAT[n]==0)
        {
            DAT[n] = fibo(n - 1) + fibo(n - 2);
        }
    }
    return DAT[n];
}

// int hcf(int a, int c )
// {
//     if(a%c == 0) return c;

//     return hcf(c,a%c); 
// }


int main()
{
    int n;
    cin>>n;

    // int b,p;
    // cin>>b>>p;

    // int a,c;
    // cin>>a>>c;

    // cout<<factorial(n)<<endl;
    // cout<<power(b,p)<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<fibo(i)<<" ";
    }
    cout<<endl;
}
