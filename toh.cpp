# include <bits/stdc++.h>
using namespace std;

void toh(int n, char S, char A, char D)
{
    if(n==1)
    { 
        cout<<"Move disk 1 from "<<S<<" to "<<D<<endl;
    } 
    toh(n-1,S,D,A);

    cout<<"Move Disk "<<n<<" from "<<s<<" to "<<d<<endl;
    else
    {
        
    }
}

int main()
{
    int n = 3;
    char A,B,C;
    
    toh(n,'A','B','C');

}