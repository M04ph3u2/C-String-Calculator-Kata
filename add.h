#pragma once
#include <string>
#include <sstream>

using namespace std;

int add(string numbers) {
    int sum = 0;
    stringstream ss(numbers);
    string num, strg;
    while (getline(ss, strg, '\n')) {
        stringstream lineStream(strg);
        while (getline(lineStream, num, ',')) {
            sum += stoi(num);
        }
    }
    return sum;
}