#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a,b,c,x;
        cin>>a>>b>>c;
        float z=(a*x*x)+b*x+c;
        float d=(b*b)-4*a*c;
        float root1=(-b+sqrt(d))/(2*a);
        float root2=(-b-sqrt(d))/(2*a);
        
        if (d>0)
        cout << root1 <<" "<<root2<<endl;
        
        else if(d==0)
        cout << root1 << " " <<root2<<endl;
        
        else {
            float real_part= -b/(2*a);
            float img_part= sqrt(-d)/(2*a);
            
            cout <<real_part<<" "<<"+"<<" "<<img_part<<"i"<<endl;
        }
        
    }
    

    return 0;
}