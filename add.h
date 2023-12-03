#pragma once
#include <string>
#include <sstream>

using namespace std;

int add(string numbers) {
    char delimiter = ',';
    if (numbers.find("//") == 0) {
        delimiter = numbers[2];
        numbers = numbers.substr(4);
    }
    int sum = 0;
    stringstream ss(numbers);
    string num, strg;
    while (getline(ss, strg, '\n')) {
        stringstream lineStream(strg);
        while (getline(lineStream, num, delimiter)) {
            int currentNum = stoi(num);
            if (currentNum < 0) {
                throw runtime_error("negatives not allowed: " + to_string(currentNum));
            }
            if (currentNum <= 1000) {
                sum += currentNum;
            }
        }
    }
    return sum;
}