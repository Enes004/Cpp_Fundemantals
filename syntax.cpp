#include <iostream> // <stdio.h> yerine
#include <string>
#include <vector>
using namespace std; // typedef yerine

int main(){

    int age;
    string name = "enes satici";
    cout <<"Enter your age : "; // printf
    cin >> age;  //scanf
    cout << name <<endl;
    cout << "Your age: " <<age <<endl; //
    vector<int>grades = {10,20,30};
    grades.push_back(45);
    for(int grade :grades){
        cout <<grade<<endl;
    }
    return 0; 
}