//
// Created by Jonathan Ramirez on 10/01/23.
//
#include <iostream>

using namespace std;

int main(){

    int age;
    string name;

    cout << "Enter your name: ";
    getline(cin,name);

    cout << "Enter your age: ";
    cin >> age;
    cout<<" your name is " << name << "And you are " << age << " Years old";

    return 0;
}