//Question 4.
//if there are n small room=2 and m large room =3 rent for n = 300 and m=600;
//find the total rent 

# include <bits/stdc++.h> 
using namespace std;
int main()
{
  int t;
   cin>>t;
   while (t--)
   {
     int n,m;
     cin>>n>>m;
     int Small_cost=n*300;
     int Large_cost=m*600;
     int Total = (Small_cost + Large_cost) ;
     cout<< Total <<endl;
   }
 }