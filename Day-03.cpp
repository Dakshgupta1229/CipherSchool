#include <iostream>
using namespace std;
int main(){
    // Ques - 01: Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum = 0;
    for(int i=1;i<=num;i++){
        sum = sum + i;
    }
    cout<<"The sum of first "<<num<<" natural numbers is: "<<sum;

    // Ques-02: Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact = fact * i;
    }
    cout<<"The factorial of "<<num<<" is: "<<fact;

    // Write a C++ program that takes an integer N as input from the user and prints the multiplication table of N up to 10 using a loop.

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Multiplication table of "<<num<<":"<<endl;
    for(int i=1;i<=10;i++){
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }


    return 0;
}