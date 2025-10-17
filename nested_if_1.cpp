 
 #include <bits/stdc++.h>
 using namespace std;
 int main()
{
 int a,b,c;
     cin>>a>>b>>c;
    
     if(a>b)
     {
         if(a>c)
        {
            cout<<"a is biggest"<<endl;
         }
         else cout<<"c is biggest"<<endl;
        
     }
     else 
     {
         if(b>c)
         {
             cout <<"b is biggest"<<endl;
         }
         else cout <<"c is biggest"<<endl;
     }
    
     return 0;
 }   