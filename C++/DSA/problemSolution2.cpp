 //DSA-II Practice Problem Set-2: 
 //Solved by Md. Siam Hossain ID:088 Sec:4B 

// /* 36.Write a program that takes a total number of minutes as input and converts it
// into hours and remaining minutes, then prints the result. */
// #include<iostream>
// using namespace std;
// int main(){
//     int time;
//     cout<<"Enter a total number of minutes: ";
//     cin>>time;
//     int min = (time%60);
//     int hrs=(time/60);
//     cout<<hrs<<" HRS "<<min<<" MIN "<<endl;
//     return 0;
// }

// /* 37.Write a program that takes three numbers as input, calculates their average,and prints the result. */
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int a,b,c;
//     cout<<"Enter three numbers: ";
//     cin>>a>>b>>c;
//     float avg = (a+b+c)/3;
//     cout<<fixed<<setprecision(1)<<avg<<endl;
//     return 0;
// }

// /* 38.Write a program that takes a year as input and prints whether it is a leap year
// or not. A year is a leap year if it is divisible by 4, but not by 100, unless it is also
// divisible by 400. */
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int year;
//     cout<<"Enter the year: ";
//     cin>>year;
//     if((year%4==0 || year%400==0) && (year%100!=0)){
//         cout<<"LEAP YEAR"<<endl;
//     } else {
//         cout<<"NORMAL YEAR"<<endl;
//     }
//     return 0;
// }

// /* 39.Write a program that takes a positive integer as input and calculates the sum of
// all its digits, then prints the result. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the positive number: ";
//     cin>>n;
//     int sum=0;
//     while(n!=0){
//         int rim = n%10;
//         n /= 10;
//         sum += rim;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// /* 40.Write a program that takes a number as input and checks if it is a palindrome.
// Print “YES” if it is, otherwise print “NO”. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the positive number: ";
//     cin>>n;
//     int temp=n, rev=0, rem;
//     while(n!=0){ 
//         rem = n%10;
//         rev = (rev*10)+rem;
//         n /= 10;
//     }
//     if(temp==rev) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     return 0;
// }

// /* 41.Write a program that takes an array as input and prints all its elements in a
// single line separated by spaces. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++) cin>>arr[i];
//     cout<<"The array elements are: ";
//     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
//     cout<<endl;
//     return 0;
// }

// /* 42.Write a program that takes an array as input and prints its elements in reverse
// order, separated by spaces. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++) cin>>arr[i];
//     cout<<"The reverse array elements are: ";
//     for(int i=(n-1); i>=0; i--) cout<<arr[i]<<" ";
//     cout<<endl;
//     return 0;
// }

// /* 43.Write a program that takes an array as input and prints the 1-based positions
// of all the odd numbers in the array. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     cout<<"The array odd elements position are: ";
//     for(int i=(n-1); i>=0; i--){
//         if(arr[i]%2!=0){
//             cout<<(i+1)<<" ";
//         } 
//     }
//     cout<<endl;
//     return 0;
// }

// /* 44.Write a program that takes an array as input and prints the number of even
// elements in the array. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     cout<<"The number of even elements in the array are: ";
//     int count=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]%2==0) count++;
//     }
//     cout<<count<<endl;
//     return 0;
// }

// /* 45.Write a program that takes an array as input and prints the sum of all odd
// elements in the array. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     cout<<"The number of even elements in the array are: ";
//     int sum=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]%2!=0) sum += arr[i];
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// /* 46.Write a program that takes an array as input and prints the maximum and
// minimum elements separated by a space. */
// #include <iostream>
// #include <climits>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     cout<<"The number of even elements in the array are: ";
//     int min = INT_MAX, max = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     cout<<max<<" "<<min<<endl;
//     return 0;
// }

// /* 47.Write a program that takes an array as input and checks if it is sorted in
// ascending order. If the array is sorted, print Yes. Otherwise, print No. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     bool s = true;
//     for(int i=0; i<n-1; i++){
//         if(arr[i] > arr[i+1]){
//             s = false;
//             break;
//         }
//     }
//     if(s) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     return 0;
// }

// /* 48.Write a program that takes an array as input and prints the number of unique
// elements less than 100. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     int uni_count=0;
//     for(int i=0; i<n; i++){
//         int count = 0;
//         for(int j=0; j<n; j++){
//             if(arr[i]==arr[j])  count++;
//         }
//         if(count==1)  uni_count++;
//     }
//     cout<<uni_count<<endl;
//     return 0;
// }

// /* 49.Write a program that takes an array and a number as input and prints the 1-
// based position of the number in the array. If the number is not present, print -1. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n,a;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     cout<<"Enter the number: ";
//     cin>>a;
//     int count=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]==a) count=(i+1);
//     }
//     if(count==0) cout<<(-1)<<endl;
//     else cout<<count<<endl;
//     return 0;
// }

// /* 50.Write a program that takes an array as input and changes the sign of each
// element. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     for(int i=0; i<n; i++){
//         if(arr[i]>0) cout<<arr[i]*(-1)<<" ";
//         else if(arr[i]<0) cout<<arr[i]*(-1)<<" ";
//         else cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// /* 51.Write a program that takes an array and a number as input and prints the last
// 1-based position of the number in the array. If the number is not present, print
// -1. */
// #include <iostream>
// using namespace std;
// int main() {
//     int n,a;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     cout<<"Enter the number: ";
//     cin>>a;
//     int pos=-1;
//     for(int i=0; i<n; i++){
//         if(arr[i]==a){
//             pos = i+1;
//         }
//     }
//     if(pos==-1) cout<<(-1)<<endl;
//     else cout<<pos<<endl;
//     return 0;
// }

// /* 52.Write a program that takes an array as input and prints the second largest
// element in the array. */
// #include <iostream>
// #include <climits>
// using namespace std;
// int main() {
//     int n,a;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array elements: ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     int max=INT_MIN, secondMax=INT_MIN;
//     for(int i=0; i<n; i++){
//         if(max<arr[i]){
//             secondMax = max;
//             max = arr[i];
//         }
//     }
//     cout<<secondMax<<endl;
//     return 0;
// }

// /* 53.Write a program that takes a string as input and prints it followed by the word
// BeSt. */
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin, str);
//     cout<<str<<"BeSt"<<endl;
//     return 0;
// }

// /* 54.Write a program that takes a string as input and prints its length. */
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin, str);
//     cout<<str.length()<<endl;
//     return 0;
// }

// /* 55.Write a program that takes a string as input and prints all uppercase letters in
// the string, separated by spaces. */
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin, str);
//     for(int i=0; i<str.length(); i++){
//         if(str[i]>'A' && str[i]<'Z'){
//             cout<<str[i]<<" ";
//         }
//     }
//     return 0;
// }

// /* 56.Write a program that takes a sentence as input and prints all lowercase letters
// in the sentence, in order, without spaces. */
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin, str);
//     for(int i=0; i<str.length(); i++){
//         if(str[i]>'a' && str[i]<'z'){
//             cout<<str[i];
//         }
//     }
//     cout<<endl;
//     return 0;
// }

// /* 57.Take a string as input, toggle the case of each character, and print the resulting
// string. */
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin, str);
//     for(int i=0; i<str.length(); i++){
//         if(str[i]>'A' && str[i]<'Z'){
//             cout<<(char)tolower(str[i]);
//         } else if(str[i]>'a' && str[i]<'z'){
//             cout<<(char)toupper(str[i]);
//         }
//     }
//     cout<<endl;
//     return 0;
// }

// /* 58.Write a program that takes a string as input and checks if it is a palindrome. If it
// is, print Yes. Otherwise, print No. */
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main() {
//     string str, str1;
//     cout<<"Enter a string: ";
//     getline(cin, str);
//     str1 = str;
//     reverse(str.begin(), str.end());
//     if(str1==str) cout<<"Yes"<<endl;
//     else cout<<"No"<<endl;
//     return 0;
// }

// /* 59.Write a program that takes a string as input and prints the number of
// occurrences of each uppercase letter in alphabetical order. */
// // #include <iostream>
// // #include <string>
// // #include <algorithm>
// // using namespace std;
// // int main() {
// //     string str;
// //     cout<<"Enter a string: ";
// //     getline(cin, str);
// //     for(int i=0; i<str.length(); i++){
// //         if(str[i]>'A' && str[i]<'Z'){
// //             bool checked = false;
// //             for (int k=0; k<i; k++){
// //                 if(str[i]==str[k]){
// //                     checked = true;
// //                     break;
// //                 }
// //             }
// //             if (checked) continue;
// //             int count = 0;
// //             for(int j=0; j<str.length(); j++){
// //                 if(str[i]==str[j]) count++;
// //             }    
// //             cout<<str[i]<<" - "<<count<<endl;
// //         }
// //     }
// //     return 0;
// // } 
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main() {
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin, str);
//     int letter[26] = {0};
//     for(char s:str){
//         if(s>'A' && s<'Z'){
//             letter[s-'A']++;
//         }
//     }
//     for(int i=0; i<26; i++){
//         if(letter[i]>0){
//             cout<<char(i+'A')<<" - "<<letter[i]<<endl;
//         }
//     }
//     return 0;
// }

/* 60.Write a program that takes an number as input and prints it with commas
separating every three digits from the right. */

