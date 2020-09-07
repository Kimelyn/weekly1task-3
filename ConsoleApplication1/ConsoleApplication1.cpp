#include <iostream>

int main()
{
    std::cout << "Tell me your age: ";
    int age = 0;
    std::cin >> age;

    if (20 >= age) {
        std::cout << "You are young :o \n";
    }
    if (20 <= age && age <= 40) {
        std::cout << "You are a grown up :) \n";
    }
    if (41 <= age && age <= 59) {
        std::cout << "You are old :I \n";
    }
    if (age >= 60) {
        std::cout << "You ARE relly old :( \n";
    }
    return 0;
}
