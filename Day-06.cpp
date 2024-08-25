#include <iostream>
using namespace std;
int main(){
    // Ques-01 Write a C++ program that takes an array as input and prints the sum of the array.

    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements: ";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<num;i++){
        sum = sum + arr[i];
    }
    cout<<sum;

    // Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements: ";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int sum_odd = 0;
    int sum_even = 0;
    for(int i=0;i<num;i++){
        if(arr[i]%2==0){
            sum_even+=arr[i];
        }
        else{
            sum_odd+=arr[i];
        }
    }
    cout<<"Sum of odd numbers: "<<sum_odd<<endl;
    cout<<"Sum od even numbers: "<<sum_even<<endl;

    // Ques-03 Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.

    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int odd_count = 0;
    int even_count = 0;
    for(int i=0;i<num;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout<<"Number of odd numbers: "<<odd_count<<endl;
    cout<<"Number of even numbers: "<<even_count;



    return 0;
}