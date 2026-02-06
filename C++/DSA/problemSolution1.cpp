 //DSA-II Practice Problem Set-1:
 //Solved by Md. Siam Hossain ID:088 Sec:4B 

//  /* 1.Write a program that takes a string as input and prints: “WELCOME, <string>!” */
//  #include<iostream>
//  #include<string>
//  using namespace std;
//  int main(){
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin, str);
//     cout<<"WELCOME, "<<str<<'!'<<endl;
//     return 0;
//  }

// /* 2.Write a program that reads two integers from the user, calculates their sum and prints the result */ 
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter two integers: ";
//     cin>>a>>b;
//     cout<<(a+b)<<endl;
//     return 0;
// } 

// /* 3.Write a program that takes the width and height of a rectangle as input, calculates the area, 
// and prints the result. */ 
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     float width, height;
//     cout<<"Enter the width & height of a rectangle: ";
//     cin>>width>>height;
//     cout<<fixed<<setprecision(1)<<(width*height)<<endl;
//     return 0;
// }

// /* 4.Write a program that takes a temperature in Celsius as input, converts it to Fahrenheit using 
// the formula F = (C × 9/5) + 32, and prints the result. */ 
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     float C,F;
//     cout<<"Enter a temperature in Celsius: ";
//     cin>>C;
//     F = (C*9/5)+32;
//     cout<<fixed<<setprecision(1)<<F<<endl;
//     return 0;
// }

// /* 5.Write a program that takes a name and age as input and prints a message in
// the format: “Hello <name>, you are <age> years old.” */
// #include <iostream>
// using namespace std;
// int main() {
//     string name;
//     int age;
//     cout<<"Enter your name & age: ";
//     getline(cin, name);
//     cin>>age;
//     cout<<"Hello "<<name<<", you are "<<age<<" years old."<<endl;
//     return 0;
// } 

// /* 6.Write a program that takes three integers as input, calculates their product, and
// prints the result. */ 
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b,c;
//     cout<<"Enter three integers: ";
//     cin>>a>>b>>c;
//     cout<<(a*b*c)<<endl;
//     return 0;
// } 

// /* 7.Write a program that takes an integer as input and determines whether it is
// “EVEN” or “ODD”. */ 
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter an integers: ";
//     cin>>n;
//     (n%2==0)?cout<<"EVEN"<<endl:cout<<"ODD"<<endl;
//     return 0;
// }

// /* 8.Write a program that takes two numbers as input and prints the larger of the
// two. */
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b;
//     cout<<"Enter two integers: ";
//     cin>>a>>b;
//     if(a>b){
//         cout<<a<<endl;
//     } else if(a<b){
//         cout<<b<<endl;
//     } else {
//         cout<<a<<endl;
//     }
//     return 0;
// }

// /* 9.Write a program that takes a student’s marks as input and checks if the student
// has passed or failed. Print “PASS” if marks ≥ 40, else print “FAIL”. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a marks of a student: ";
//     cin>>n;
//     (n>=40)?cout<<"PASS"<<endl:cout<<"FAIL"<<endl;
//     return 0;
// }

// /* 10.Write a program that takes an integer as input and prints whether the number
// is “POSITIVE”, “NEGATIVE”, or “ZERO”. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter an integer: ";
//     cin>>n;
//     if(n>0){
//         cout<<"POSITIVE"<<endl;
//     } else if(n<0){
//         cout<<"NEGATIVE"<<endl;
//     } else {
//         cout<<"ZERO"<<endl;
//     }
//     return 0;
// }

// /* 11.Write a program that takes a person’s age as input and prints whether they are
// eligible to vote. If the age >=18, print “Eligible”; otherwise, print “Not Eligible”. */
// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     cout<<"Enter a person age: ";
//     cin>>age;
//     (age>=18)?cout<<"Eligible"<<endl:cout<<"Not Eligible"<<endl;
//     return 0;
// }

// /* 12.Write a program that takes a purchase amount as input and applies a 10%
// discount if the amount is ≥1000. Print the final amount. */
// #include <iostream>
// #include<iomanip>
// using namespace std;
// int main() {
//     float amount, result;
//     cout<<"Enter a purchase amount: ";
//     cin>>amount;
//     if(amount>=1000){
//         amount -= (amount*0.1);
//         cout<<fixed<<setprecision(2)<<amount<<endl;
//     } else {
//         cout<<fixed<<setprecision(2)<<amount<<endl;
//     }
//     return 0;
// }

// /* 13.Write a program that takes marks (0–100) as input and prints the grade: A for
// 90+, B for 80–89, C for 70–79, D for 60–69, and F for below 60. */
// #include <iostream>
// using namespace std;
// int main() {
//     int mark;
//     cout<<"Enter a mark(0-100): ";
//     cin>>mark;
//     if(mark>=90 && mark<101) cout<<'A'<<endl;
//     else if(mark>=80 && mark<90) cout<<'B'<<endl;
//     else if(mark>=70 && mark<80) cout<<'C'<<endl;
//     else if(mark>=60 && mark<70) cout<<'D'<<endl;
//     else if(mark>=0 && mark<60) cout<<'F'<<endl;
//     else cout<<"Invalid mark."<<endl;
//     return 0;
// }

// /* 14.Write a program that takes three integers as input and prints the maximum of
// the three. */
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b,c;
//     cout<<"Enter three integers: ";
//     cin>>a>>b>>c;
//     if(a>=b && a>=c){
//         cout<<a<<endl;
//     } else if(b>=a && b>=c){
//         cout<<b<<endl;
//     } else {
//         cout<<c<<endl;
//     }
//     return 0;
// } 

// /* 15.Write a program that takes an integer as input and prints whether it is “Positive
// & Even”, “Positive & Odd”, “Negative”, or “Zero”. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter an integer: ";
//     cin>>n;    
//     if(n>0 && n%2==0){
//         cout<<"Positive & Even"<<endl;
//     } else if(n>0 && n%2!=0){
//         cout<<"Positive & Odd"<<endl;
//     } else if (n<0){
//         cout<<"Negative"<<endl;
//     } else {
//         cout<<"Zero"<<endl;
//     }
//     return 0;
// }

// /* 16.Write a program that takes a username and password as input. If the username
// is "admin" and the password is "1234", print "Login successful". Otherwise,
// print "Invalid credentials". */
// #include <iostream>
// #include<string>
// using namespace std;
// int main() {
//     string username, password;
//     cout<<"Enter a username & password: ";
//     cin>>username>>password;
//     if(username=="admin" && password=="1234"){
//         cout<<"Login successful"<<endl;
//     } else {
//         cout<<"Invalid credentials"<<endl;
//     }
//     return 0;
// }

// /* 17.Write a program that takes a temperature in Celsius as input and prints "Hot" if
// it is ≥20, "Cool" if it is between 10 and 19, and "Cold" if it is below 10. */
// #include <iostream>
// using namespace std;
// int main() {
//     int temp;
//     cout<<"Enter a temperature in Celsius: ";
//     cin>>temp;
//     if(temp>=20) cout<<"Hot"<<endl;
//     else if(temp<=19 && temp>=10) cout<<"Cool"<<endl;
//     else if(temp<10) cout<<"Cold"<<endl;
//     return 0;
// }

// /* 18.Write a program that takes three sides of a triangle as input, checks if the
// triangle is valid, and if valid, prints whether it is “Equilateral”, “Isosceles”, or
// “Scalene”, otherwise print “Invalid”.
// Equilateral: All three sides are equal (a == b == c)
// Isosceles: Two sides are equal (a == b OR b == c OR a == c)
// Scalene: All sides are different (a ≠ b ≠ c) */
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b,c;
//     cout<<"Enter three side of a triengle: ";
//     cin>>a>>b>>c;
//     if((a+b>c) && (a+c>b) && (b+c>a)){
//         if(a == b && a == c){
//             cout<<"Equilateral"<<endl;
//         } else if(a == b || b == c || a == c) {
//             cout<<"Isosceles"<<endl;
//         } else if (a!=b && a!=c){
//             cout<<"Scalene"<<endl;
//         }
//     } else {
//         cout<<"Not a valid triangle!"<<endl;
//     }
//     return 0;
// } 

// /* 19.Write a program that takes a number N as input and prints all numbers from 1
// to N, separated by spaces. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// /* 20.Write a program that takes a number N as input and prints all even numbers
// from 1 to N, separated by spaces. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         if(i%2==0) cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// /* 21.Write a program that takes a number N as input and calculates the sum of all
// numbers from 1 to N, then prints the result. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum=0;
//     for(int i=1; i<=n; i++){
//         sum += i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// /* 22.Write a program that takes a number as input and prints its multiplication table
// up to 10. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1; i<=10; i++){
//         cout<<n<<" x "<<i<<" = "<<(i*n)<<endl;
//     }
//     cout<<endl;
//     return 0;
// }

// /* 23.Write a program that takes a positive integer as input and prints the number of
// digits in it. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n, c=0;
//     cout<<"Enter a positive number: ";
//     cin>>n;
//     while(n!=0){
//         n /= 10;
//         c++;
//     }
//     cout<<c<<endl;
//     return 0;
// }

// /* 24.Write a program that takes a number as input and prints its digits in reverse
// order. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n, c=0, rev=0;
//     cout<<"Enter a positive number: ";
//     cin>>n;
//     while(n!=0){
//         int rim = n%10;
//         rev = (rev*10)+rim;
//         n /= 10;
//     }
//     cout<<rev<<endl;
//     return 0;
// }

// /* 25.Write a program that takes a number N as input and calculates its factorial (N! =
// 1 × 2 × ... × N), then prints the result. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n, fact=1;
//     cout<<"Enter a number: ";
//     cin>>n;
//     while(n>0){
//         fact = fact * n;
//         n--;
//     }
//     cout<<fact<<endl;
//     return 0;
// }

// /* 26.Write a program that takes a number N as input and prints all its positive
// divisors in ascending order, separated by spaces. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         if(n%i==0) cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// /* 27.Write a program that takes the principal amount, rate of interest, and time as
// input, calculates the simple interest using SI = (P × R × T) / 100, and prints the
// result. */
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     double P, R, T;
//     cout<<"Enter value of P, R & T: ";
//     cin>>P>>R>>T;
//     double result = (P * R * T) / 100.0;
//     cout<<fixed<<setprecision(1)<<result<<endl;
//     return 0;
// }

// /* 28.Write a program that takes the radius of a circle as input and calculates its
// perimeter (circumference) using the formula Perimeter = 2 × π × r (π = 3.1416),
// then prints the result. */
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// int main() {
//     int r;
//     double p;
//     cout<<"Enter the radius of a circle: ";
//     cin>>r;
//     p = (2*3.1416*r);
//     // cout<<fixed<<setprecision(1)<<p<<endl;
//     cout<<p<<endl;
//     return 0;
// }

// /* 29.Write a program that takes a person’s weight (kg) and height (meters) as input,
// calculates the Body Mass Index (BMI) using the formula BMI = weight / (height
// × height), and prints the result. */
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// int main() {
//     double w, h, BMI;
//     cout<<"Enter a person weight (kg) and height (meters) : ";
//     cin>>w>>h;
//     BMI = w / (h*h);
//     cout<<fixed<<setprecision(3)<<BMI<<endl;
//     return 0;
// }

// /* 30.Write a program that takes two integers A and B as input and computes A
// raised to the power B (A^B) without using any built-in power function, then
// prints the result. */
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     double A, B;
//     cout<<"Enter two integers: ";
//     cin>>A>>B;
//     int result=1;
//     for(int i=1; i<=B; i++){
//         result *= A;
//     }
//     cout<<result<<endl;
//     return 0;
// }

// /* 31.Write a program that takes two integers as input and finds their greatest
// common divisor (GCD), then prints the result. */
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int a,b;
//     cout<<"Takes two integers: ";
//     cin>>a>>b;
//     if(a==0 && b==0){
//         cout<<"Both number are zero."<<endl;
//         return 0;
//     } 
//     a = abs(a);
//     b = abs(b);
//     while (b!=0){
//         int rim = a%b;
//         a = b; b = rim;
//     }  
//     cout<<a<<endl;
//     return 0;
// }

// /* 32.Write a function that takes two numbers as input, adds them, and returns the
// sum. */
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     cout<<(a+b)<<endl;
//     return 0;
// }

// /* 33.Write a function that takes two numbers as input and returns the larger of the
// two. */
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     if(a>b) cout<<a<<endl;
//     else cout<<b<<endl;
//     return 0;
// }

// /* 34.Write a function that takes a number as input and returns “PRIME” if the
// number is prime, and “NOT PRIME” otherwise. */
// #include <iostream>
// using namespace std;
// int main() {
//     int a;
//     cout<<"Enter a numbers: ";
//     cin>>a;
//     int count=0;
//     for(int i=2; (i*i)<=a; i++){
//         if(a%i==0){
//             count=1;
//             break;
//         }
//     }
//     if(count==0) cout<<"Prime"<<endl;
//     else cout<<"Non Prime"<<endl;
//     return 0;
// }

// /* 35.Write a function that takes a non-negative integer as input, calculates its
// factorial, and returns the result. */
// #include <iostream>
// using namespace std;
// int fact(int n){
//     int f=1;
//     for(int i=1; i<=n; i++){
//         f *= i;
//     }
//     return f;
// }
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<fact(n)<<endl;
//     return 0;
// }
