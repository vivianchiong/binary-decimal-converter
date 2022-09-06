#include <iostream>

#include "converter.cpp"

template <typename T>
void enterInput(const std::string& str, T& arg)  {
    do {
        if (std::cout << str && std::cin >> arg) break;
        std::cout << "Invalid input, please re-enter ... " << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (true);

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main(int argc, char* const argv[]) {
    char base = ' ';
    std::string strNum = "";

    while (true) {
        enterInput<char>("Base to convert from (b)inary/(d)ecimal: ", base);
        if ('b' == base || 'd' == base) break;
    }

    enterInput<std::string>("Number to convert (positive integer): ", strNum);
    convert(base, strNum);

    return 0;
}