#pragma once
#include <string>
#include <sstream>

using namespace std;

int add(string numbers) {
    if (numbers.empty()) {
        return 0;
    }
    stringstream ss;
    ss << numbers;
    int sum = 0;
    string num, strg;
    while (getline(ss, strg, '\n')) {
        stringstream ss2(strg);
        while (getline(ss2, num, ',')) {
            sum += stoi(num);
        }
    }
    return sum;
}