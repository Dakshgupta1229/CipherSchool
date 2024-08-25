#include <iostream>
using namespace std;
int main(){
    // Write C++ program that take array from the user and sort the array using bubble sort algorithm.

    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }

    // Ques-02 Write C++ program that take array from the user and sort the array using insertion sort algorithm.

    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=1;i<num;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>arr[j-1]){
                break;
            }
            else{
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
    }
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}