#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        float unit;
        cin>>unit;
        
        if(unit<=100)
        {
            float T=(unit*1.20) + 210;
            
            cout << T +(0.18*T)<<endl;
        }
        else if(101<unit<200)
        {
            float T=(unit*5.30) + 320;
            
            cout << T +(0.18*T)<<endl;
        }
        else if(201<unit<300)
        {
            float T=(unit*7.40) + 415;
            
            cout << T +(0.18*T)<<endl;
        }
        else 
        {
            float T=(unit*8.50) + 440;   
            cout<< T+(0.18*T)<<endl;
        }
        
    }

    return 0;
}