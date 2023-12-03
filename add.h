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
    if (numbers.find("-") != string::npos) {
        int minusPos = numbers.find("-");
        int substringStart = minusPos + 1;
        int newlinePos = numbers.substr(substringStart).find('\n');
        int delimiterPos = numbers.substr(substringStart).find(delimeter);
        if (delimiterPos != string::npos && (newlinePos == string::npos || newlinePos < delimiterPos)) {
            throw std::runtime_error("negatives not allowed: -" + numbers.substr(substringStart, delimiterPos));
        }
        else {
            throw std::runtime_error("negatives not allowed: -" + numbers.substr(substringStart, newlinePos));
        }
    }
    int sum = 0;
    stringstream ss(numbers);
    string num, strg;
    while (getline(ss, strg, '\n')) {
        stringstream lineStream(strg);
        while (getline(lineStream, num, delimeter)) {
            if (stoi(num) <= 1000) {
                sum += stoi(num);
            }
        }
    }
    return sum;
}