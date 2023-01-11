//
// Created by Jonathan Ramirez on 09/01/23.
//
#include <iostream>

using namespace std;

int main(){
    string phrase = "This is the best phrase ever.";
    cout << "Hello World Once Again!" <<endl;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    phrase[0] = 'B';
    cout << phrase.find("best") << endl;
    cout << phrase.substr(12, 2);
    return 0;

}