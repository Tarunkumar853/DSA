// # include <bits/stdc++.h>
// using namespace std;
// int sum(int a,int b)
// {
//     return (a+b);
// }
// int calculate()
// {
//     int a,b,c;
//     cin>>a>>b;
//     c = sum(a,b);
//     return c;
// }
// int main()
// {
//     int c;
//     c= calculate();
//     cout<<"the sum of two no. is"<<" "<<c<<endl;
//     return 0;
// }

//pass by address
// # include <bits/stdc++.h>
// using namespace std;
// void SWAP(int *a,int *b);
// int main()
// {
//     int a,b,c;
//     cin>>a>>b;
//     SWAP(&a,&b);
//     return 0;
// }
// void SWAP(int *a,int *b)
// {
//     int t;
//     t=*a;
//     *a=*b;
//     *b=t;
//     cout<<"The value after the swapping is "<<" "<<*a<<" "<<*b<<endl;
// }

//pass by reference
// # include <bits/stdc++.h>
// using namespace std;
// void SWAP(int &a,int &b)
// {
//     int t;
//     t=a;
//     a=b;
//     b=t;
//     cout<<"The value after the swapping is "<<" "<<a<<" "<<b<<endl;
// }
// int main()
// {
//     int a,b,c;
//     cin>>a>>b;
//     SWAP(a,b);
//     return 0;
// }

//WAP in c++ pattern using function.
# include <bits/stdc++.h>
using namespace std;
void pat(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
int main()
{
    int a,b;
    cin>>a;
    pat(a);
    return 0;
}
