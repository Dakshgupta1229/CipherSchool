#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main(){
    // Ques-01 Write a C++ function that checks whether an integer is odd or even. If the integer is odd, print "Odd"; otherwise, print "Even."

    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }

    // Ques-02 Write a C++ function that takes a string as input and reverses it.

    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int i=0;
    vector<char> v;
    while(str[i]!='\0'){
        v.push_back(str[i]);
        i++;
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }

    // Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.

    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int count_vowel = 0;
    int count_consonant = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count_vowel++;
        }
        else{
            count_consonant++;
        }
    }
    cout<<"Number of vowels: "<<count_vowel<<endl;
    cout<<"Number of consonants: "<<count_consonant;
    return 0;
}