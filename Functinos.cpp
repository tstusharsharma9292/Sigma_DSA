// // Palindrome

// #include<iostream>
// using namespace std;

// bool IsPalindrome(int n){
//         if (n<0)
//         {
//             return false;
//         }
//     int temp = n;
//     int rev = 0;
//     while (temp > 0)
//     {
//         int lastDig = temp % 10;
//         temp = temp / 10;
//         rev = rev*10 + lastDig;
//     }
//     return (rev == n);
// }
// int main(){
//     int n;
//     cin>>n;
//     if (IsPalindrome(n))
//     {
//         cout<<"the number is Palindrome"<<endl;
//     }else{
//         cout<<"the number is not Palindrome"<<endl;
//     }
    
// return 0;
// }


// // Sum Of Digits

// #include<iostream>
// using namespace std;

// int SumOfDig(int n){
//     int temp = n;
//     int sum = 0;
//     while(temp > 0){
//         int LastDig = temp%10;
//         sum = sum + LastDig;
//         temp = temp/10;
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<<"Enter the Number";
//     cin>>n;
//     cout<<SumOfDig(n);

//     return 0;
// }


// // (a+b) whole square

// #include<iostream>
// using namespace std;

// int WholeSquare(int a , int b){ 
//     return a*a + b*b + 2*a*b;
// }

// int main(){
//     int a , b;
//     cout<<"Enter the values of a and b";
//     cin>>a>>b;
//     cout<<"the whole square is "<<WholeSquare(a,b)<<endl;

// return 0;
// }


// // Largest of 3

// #include<iostream>
// using namespace std;

// int LargestOfThree(int x, int y ,int z){
//     if (x>=y && x>=z)
//     {
//         return x;
//     }else if(y > z){
//         return y;
//     }else{
//         return z;
//     }
    
// }

// int main(){
//     int a,b,c;
//     cout<<"Enter the numbers";
//     cin>>a>>b>>c;
//     cout<<"the largest number is "<<LargestOfThree(a , b , c)<<endl;

// return 0;
// }


// // Character ++

// #include<iostream>
// using namespace std;

// char PostChar(char a){
//        return (a+1);
// }

// int main(){
//     char a;
//     cout<<"Enter the character ";
//     cin>>a;
//     cout<<"The next character is "<<PostChar(a)<<endl;

// return 0;

// }