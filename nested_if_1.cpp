 //Question 1
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
// {
//  int a,b,c;
//      cin>>a>>b>>c;
    
//      if(a>b)
//      {
//          if(a>c)
//         {
//             cout<<"a is biggest"<<endl;
//          }
//          else cout<<"c is biggest"<<endl;
        
//      }
//      else 
//      {
//          if(b>c)
//          {
//              cout <<"b is biggest"<<endl;
//          }
//          else cout <<"c is biggest"<<endl;
//      }
    
//      return 0;
//  }   


// Question 3. 
// GOI announced Pension to indian citizens.
// conditions 1. he/she should be indian citizens.
// conditions 2. age should be greater or equal to 60.
// conditions 3. annual income should be less than or equal to 2 lakhs

// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//      cin>>t;
    
//      while (t--)
//      {
//       char  Indian_Citizen;
//       int age;
//       long long annual_income;
//       cin>>Indian_Citizen>>age>>annual_income;
     
//       if(Indian_Citizen=='Y')
//       {
//           if (age>=60)
//           {
//               if (annual_income <= 200000)
//               {
//                   cout <<"You are Eligible"<<endl;
//               }
//               else cout <<"Not Eligible due to Income Higher than the allowed"<<endl;
//           }
//           else cout <<"Not Eligible Due to Age is less or greater than allowed"<<endl;
         
//       }
//       else cout<<"Not Eligible Due to You are not citizen of India"<<endl;
        
//      }
//  }