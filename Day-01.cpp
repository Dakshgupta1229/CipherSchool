// ques 1 write a c++ program that takes two strings as input from the user and concatenate them, then output the concatenated string.
  
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1,str2; 
    cout<<"Enter the first string: ";
    getline(cin,str1);
    cout<<"Enter the second string: ";
    getline(cin,str2);
    string concatenated = str1 + str2;
    cout<<"Concatenated String: "<<concatenated;
    return 0;
}

// ques 2 Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int arr[5];
    float sum = 0;
    for(int i=0;i<5;i++){
        cout<<"Enter grade "<<i+1<<":"<<endl;
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"The average grade is:"<<fixed<<setprecision(1)<<sum/5;
    return 0;
}

// Ques- 03 Write a C++ program that takes an integer as input from the user and outputs its square.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The square of "<<num<<" is:"<<num*num;
    return 0;
}