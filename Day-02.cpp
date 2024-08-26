#include <iostream>
using namespace std;
int main(){
    // Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

    int first,second,third;
    cout<<"Enter the first number: ";
    cin>>first;
    cout<<"Enter the second number: ";
    cin>>second;
    cout<<"Enter the third number: ";
    cin>>third;
    if(first>second && first>third){
        cout<<"The largest number is: "<<first;
    }
    else if(second>first && second>third){
        cout<<"The largest number is: "<<second;
    }
    else{
        cout<<"The largest number is: "<<third;     
    }

    // Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.

    int score;
    cout<<"Enter the score: ";
    cin>>score;
    if(score>=90 && score<=100){
        cout<<"Grade: A";
    }
    else if(score>=80 && score<=89){
        cout<<"Grade: B";
    }
    else if(score>=70 && score<=79){
        cout<<"Grade: C";
    }
    else if(score>=60 && score<=69){
        cout<<"Grade: D";
    }
    else if(score>=0 && score<=59){
        cout<<"Grade: F";
    }
    else{
        cout<<"Invalid";
    }

    // Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    switch(num){
        case 1:
            cout<<"The month is:January";
            break;
        case 2:
            cout<<"The month is:February";
            break;
        case 3:
            cout<<"The month is:March";
            break;
        case 4:
            cout<<"The month is:April";
            break;
        case 5:
            cout<<"The month is:May";
            break;
        case 6:
            cout<<"The month is:June";
            break;
        case 7:
            cout<<"The month is:July";
            break;
        case 8:
            cout<<"The month is:August";
            break;
        case 9:
            cout<<"The month is:September";
            break;
        case 10:
            cout<<"The month is:October";
            break;
        case 11:
            cout<<"The month is:November";
            break;
        case 12:
            cout<<"The month is:December";
            break;
        default:
            cout<<"Invalid";
    }
    return 0;
}