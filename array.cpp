//Sum of Array
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[10],i,sum=0;
//     for(i=0;i<10;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<10;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     for(i=0;i<10;i++)
//     {
//         sum=sum+a[i];
//     }
//     cout<<"Sum of Array is"<<" "<<sum<<endl;
//     return 0;
// }

//Average
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[10],i,sum=0;
//     double avg;
//     for(i=0;i<10;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<10;i++)
//     {
//         sum=sum+a[i];
//     }
//     avg=sum/10.0;
//     cout<<avg<<endl;
//     return 0;
// }

//Max 
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,a[10];
//     for(i=0;i<10;i++)
//     {
//         cin>>a[i];
//     }
//     int max=a[0];
//     for(i=1;i<10;i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//     }
//     cout<<max<<endl;
//     return 0;
// }

//Even Number
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,a[10],even=0,odd=0,e,o;
//     for(i=0;i<10;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<10;i++)
//     {
//         if(a[i]%2==0)
//         {
//             e=a[i];
//             even++;
//         }
//     }
//     cout<<endl;
//     for(i=0;i<10;i++)
//     {
//         if(a[i]%2!=0)
//         {
//             o=a[i];
//             odd++;
//         }
//     }
//     cout<<endl;
//     cout<<"Even Elements:"<<" "<<e<<endl;
//     cout<<"odd elements:"<<" "<<o<<endl;
//     cout<<"Total Even Elements"<<even<<endl;
//     cout<<"Total odd elements"<<odd<<endl;
//     return 0;
// }