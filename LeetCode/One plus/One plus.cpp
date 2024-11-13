#include <iostream>
#include <string>
std::string proverkavvoda(std::string digits) { //функция на проверку ограничений по заданию Constraints: 
//1.(1 <= digits.length <= 100) 
//2.(0 <= digits[i] <= 9) 
//3.(digits does not contain any leading 0's.)
    bool chek = true, final = true;
    while (final) {
        system("cls");
        chek == true ? std::cout << "Enter the value of the digits: " : std::cout << "Error try to enter the value of the digits again: ";
        getline(std::cin, digits);
        digits.length() <= 100 || digits.length() >= 1 ? chek = true : chek = false;
        for (int i = 0; i < digits.length() && chek == true; ++i) {
            if (digits[0] == '0') {
                chek = false;
            }
            if (digits[i] >= '0' && digits[i] <= '9') {
                continue;
            }
            else {
                chek = false;
            }
        }
        if (chek == true) {
            final = false;
        }
    }
    return digits;
}

int main() {
    std::string digits;
    digits = proverkavvoda(digits);
    std::cout << digits;
}
