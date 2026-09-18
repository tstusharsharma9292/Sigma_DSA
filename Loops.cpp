// // factorial of number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: "<<endl;
//     cin>>n;
//     int fact =1;
//     for (int i= n; i > 1; i--)
//     {
//         fact = fact*i;
//     }
//     cout<<fact<<endl;
// return 0;
// }

// // Table of n

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for (int i = 1; i < 11; i++)
//     {
//         cout<<(n*i)<<" ";
//     }
// return 0;
// }

// Armstrong Number

// #include<iostream>
// using namespace std;

// int main(){
//     int num, sum = 0, lastdig = 0;
//     cout << "Enter the number: ";
//     cin >> num;

//     int n = num, n1 = num;
//     int x = 0;

//     // Step 1: Count the number of digits
//     while (n > 0) {
//         x++;
//         n = n / 10;
//     }

//     // Step 2: Extract digits and compute power inline
//     while (n1 > 0) {
//         lastdig = n1 % 10;

//         // Inline power calculation using a standard for loop
//         int termPower = 1;
//         for (int j = 0; j < x; j++) {
//             termPower = termPower * lastdig;
//         }

//         sum = sum + termPower;
//         n1 = n1 / 10;
//     }

//     // Step 3: Check result
//     if (sum == num) {
//         cout << "The number is armstrong";
//     } else {
//         cout << "The number is not armstrong";
//     }

//     return 0;
// }

// prime form 2 to n

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter teh number: ";
//   cin>> n;
//   int factor =0;
//   for (int i = 2; i*i<=n ; i++)
//   {
//     if (n%i==0)
//     {
//         factor++;
//     }

//   }
//   if (factor==0)
//   {
//     cout<<"The number is prime"<<endl;
//   }else{
//     cout<<"The number is not prime"<<endl;
//   }

// return 0;
// }

// Fibonacci

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 0;
//     cout << "Enter the number: ";
//     cin >> n;
//     if (n == 0)
//     {
//         return 0;
//     }
//     int a = 0;
//     int b = 1;
//     int c = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i == 1)
//         {
//             cout << a << " ";
//         }else if (i==2)
//         {
//             cout<< b <<" ";
//         }
        
//         else
//         {

//             c = a + b;
//             a = b;
//             b = c;
//             cout << b << " ";
//         }
//     }

//     return 0;
// }
