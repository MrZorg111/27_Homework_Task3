#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>
#include <vector>
#include "function.h"

//Опять таки, для повышения уровня рандомности утсановленны задержки

char gen_rand_task() {
    std::srand(time(nullptr));
    std::time_t t = std::time(nullptr);
    while (std::time(nullptr) < t + 1) {};
    switch (rand() % 3) {
    case 0:
        return 'A';
    case 1:
        return 'B';
    case 2:
        return 'C';
    default:
        std::cout << "Неверный ввод!" << std::endl;
    }
}

std::string generation_names() {
    std::srand(time(nullptr));
    std::string name;
    int name_len = rand() % 3 + 4;
    std::time_t t = std::time(nullptr);
    while (std::time(nullptr) < t + 1) {};
    char first_simbol[6]{ 'E', 'Y', 'U', 'I', 'O', 'A' };
    char sec_simbol[19]{ 'q', 'w', 'r', 't', 'p', 'l', 'k', 'h', 'g', 'f',
                        'd', 's', 'z', 'x', 'c', 'v', 'b', 'n', 'm' };
    char third_simbol[6]{ 'e', 'y', 'u', 'i', 'o', 'a' };
    for (int count = 0; count < name_len; count++) {
        if (count == 0) {
            name.push_back(first_simbol[rand() % 6]);
            continue;
        }
        else if (count > 0) {
            name.push_back(sec_simbol[rand() % 19]);
            count++;
            if (count < name_len) {
                name.push_back(third_simbol[rand() % 6]);
            }
        }
        else {
            return "Incorrect data entry!";
        }
    }
    return name;
}