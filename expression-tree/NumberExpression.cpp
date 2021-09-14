//
// Created by Duncan on 9/14/2021.
//

#include "NumberExpression.hpp"
#include <iostream>
using namespace std;
NumberExpression::NumberExpression(double num) : number(num){
    cout << "number " << number << " created!" << endl;
}
NumberExpression::~NumberExpression() {
    cout << "number " << number << " destroyed!" << endl;
}
double NumberExpression::compute() {
    return number;
}