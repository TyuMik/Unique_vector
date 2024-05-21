#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

void uniqueVector(std::string& s) {

    std::getline(std::cin, s);
    std::stringstream raw_data(s);

    int num;

    std::vector<int> input;

    while (raw_data >> num) {
        input.push_back(num);
    }

    std::sort(input.begin(), input.end(), [](const int& a, const int& b) { return a > b; });

    auto itr = std::unique(input.begin(), input.end());

    input.erase(itr, input.end());

    std::cout << "\nMассив из уникальных элементов: ";

    for (auto& i : input) {

        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите числа массива через пробел: ";
    std::string input_string;
    
    uniqueVector(input_string);

    return 0;
}