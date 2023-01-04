//
// Created by Jonathan Ramirez on 03/01/23.
//
#include <iostream>

int add_numbers(int first_number, int second_number) {
    int result = first_number + second_number;
    return result;
}

int multiply_numbers(int first_num, int second_num){
    int result = first_num * second_num;
    return result;
}

int main(){
    int first {1};
    int second {2};

    std::cout<<"The first number is: "<< first <<std::endl;
    std::cout<<"The second number is: "<< second <<std::endl;

    int sum = add_numbers(25,5);
    std::cout<<"Sum is: " << sum <<std::endl;

    int multiply = multiply_numbers(first, second);
    std::cout<<"Result of multiply is: " << multiply <<std::endl;

    return 0;
}