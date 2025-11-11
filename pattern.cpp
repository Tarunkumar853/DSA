//Star Pattern;
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Number Print
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Alphabet Print
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {   
//     char n;
//     cin>>n;
//     for(char i='F';i<=n;i--)
//     {
//         for(char j='A';j<=i;j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Diamond Pattern
// 

//Solid Rectangle/Square
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<n;col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Hollow Retangle/Square
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     for(int row=0;row<n;row=row+1)
//     {
//         if(row==0 || row==n-1)
//         {
//             for(int col=0;col<m;col=col+1)
//             {
//                 cout<<"* ";
//             }
//         }
//         else 
//         {
//             cout<<"* ";
//             for(int i=0;i<(m-2);i++)
//             {
//                 cout<<"  ";
//             }
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Hollow Circle/Oval
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int row=0;row<6;row=row+1)
//     {
//         if(row==0 || row==5)
//         {
//             cout<<" "<<" "<<" ";
//             cout<<"*";
//             cout<<" "<<" "<<" ";
//         }
//         else
//         {
//             if(row==2 || row==3)
//          {
//             cout<<"*";
//             for(int col=1;col<6;col=col+1)
//             {
//                 cout<<" ";
//             }
//             cout<<"*";
//          }
//          else
//          {
//             if(row==1 || row==4)
//             {
//                 cout<<" ";
//                 cout<<"*";
//              for(int col=2;col<5;col=col+1)
//              {
//                 cout<<" ";
//              }
//                 cout<<"*";
//             }
//           }  
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Pyramid
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {   
//     int n;
//     cin>>n;
    //Half Pyramid for number 
    // for(int row=0;row<n;row=row+1)
    // {
    //     for(int col=0;col<row+1;col=col+1)
    //     {
    //         cout<<col+1;
    //     } 

    //Inverted Pyramid for Number
    // for(int row=0;row<n;row=row+1)
    // {
    //     for(int col=0;col<n-row;col=col+1)
    //     {
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    //full pyramid.
    // for(int row=0;row<n;row=row+1)
    // {
    //     for(int col=0;col<n-row;col=col+1)
    //     {
    //         cout<<" ";
    //     }
    //     for(int col=0;col<row+1;col=col+1)
    //     {
    //         cout<<" ";
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    //Inverted Full pyramid
//     for(int row=0;row<n;row=row+1)
//     {
//         for(int col=0;col<row+1;col=col+1)
//         {
//             cout<<" ";
//         }
//         for(int col=0;col<n-row;col=col+1)
//         {
//             cout<<"*";
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0; 
// }
    
    