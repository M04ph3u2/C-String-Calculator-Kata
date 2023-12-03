#pragma once
#include <string>
#include <sstream>

using namespace std;

int add(string numbers) {
    char delimeter = ',';
    if (numbers.find("//") == 0) {
        delimeter = numbers[2];
        numbers = numbers.substr(4);
    }
    int sum = 0;
    stringstream ss(numbers);
    string num, strg;
    while (getline(ss, strg, '\n')) {
        stringstream lineStream(strg);
        while (getline(lineStream, num, delimeter)) {
            sum += stoi(num);
        }
    }
    return sum;
}