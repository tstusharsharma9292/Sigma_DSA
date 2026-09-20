// //  alternate bool

// #include<iostream>
// using namespace std;
//  int main(){
//    bool var = true;
//    int n=5;
//    for (int i =1 ; i <= n; i++)
//    { if (i%2==0)
//     {
//       var = false;
//     }else{
//       var = true;
//     }
//     for (int j = 1; j <=i; j++)
//     {
//         cout<<var<<" ";
//         var = !var;
//     }
   
    
//     cout<<endl;
//    }
//    return 0;
//  }


// // rhombus

// #include<iostream>
// using namespace std;
// int main(){

// int n=5;
// for (int i = 1; i <=n; i++)
// {
//   // spaces
//   for (int j = 1; j <=n-i; j++)
//   {
//     cout<<" ";
//   }
//   // stars
//   for (int j = 1; j <=n ; j++)
//   {
//     cout<<"*";
//   }
//   cout<<endl;
// }

// return 0;
// }

// // plaindromic pattern 

// #include<iostream>
// using namespace std;

// int main(){
//     int n=5 ;
//     for (int i = 1; i <=n ; i++)
//     {
//       // spaces

//       for (int j = 1; j <= n-i; j++)
//       {
//         cout<<" ";
//       }

//       // backword numbers
       
//       for (int j = i; j >= 1 ; j--)
//       {
//         cout<<j;
//       }

//       // forword numbers

//       for (int j = 2; j <= i; j++)
//       {
//         cout<<j;
//       }
      
//     cout<< endl;
 
//     }
// return 0;
// }