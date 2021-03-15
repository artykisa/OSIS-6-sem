#include <sstream>
#include "support.h"



std::string string_result(std::string &data) {
    std::istringstream input(data);

    std::string temp;

    input >> temp;
    int type = std::stoi(temp);

    input >> temp;
    double first = std::stod(temp);
        
    input >> temp;
    double second = std::stod(temp);
    return std::to_string(calculate(type, first, second));
}

double calculate(int type, double first, double second) {
    switch (type) {
        case 1:
            return first + second;
        case 2:
            return first * second;
        case 3:
            return first * first + second * second;
    }
    return EXIT_FAILURE;
}
