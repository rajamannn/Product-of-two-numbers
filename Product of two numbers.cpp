//Program to print the product of two numbers using function in C++

#include <iostream>
using namespace std;

//int product(int a, int b)
//{
 // int c = a*b;
 // return c;
//}
int product (int ,int );

 int main()
 {
   int num1,num2;
     cout << "Enter the first number" << endl;
     cin >>num1;
     cout << "Enter the second number" << endl;
     cin >> num2;
     cout << "The product is " << product(num1,num2);
     cout << "\nThank You" << endl;

return 0;
}
 int product (int a, int b)
 {
  int c = a*b;
  return c;
 }


