#include <iostream>
#include <bitset>

#define BIN_DIGITS "01"
#define DEC_DIGITS "0123456789"

void convert(char base, std::string strNum) {
    if ('b' == base &&
        strNum.find_first_not_of(BIN_DIGITS) == std::string::npos) {

        int decimal = std::stoi(strNum, nullptr, 2);
        std::cout << "Decimal number: " << decimal << std::endl;

    } else if ('d' == base &&
               strNum.find_first_not_of(DEC_DIGITS) == std::string::npos) {

        int num = std::stoi(strNum, nullptr, 10);
        std::string binary = std::bitset<32>(num).to_string();
        binary.erase(0, binary.find_first_not_of('0'));
        std::cout << "Binary number: " << binary << std::endl;

    } else {
        std::cout << "Invalid number, please try again." << std::endl;
    }
}