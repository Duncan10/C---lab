//
// Created by Duncan on 9/14/2021.
//

#include "MinusExpression.hpp"
#include <iostream>

using namespace std;

MinusExpression::MinusExpression(Expression *left, Expression *right)
        : BinaryExpression(left, right){
    cout << "MinusExpression created!" << endl;
}
MinusExpression::~MinusExpression(){
    cout << "MinusExpression destroyed!" << endl;
}
double MinusExpression::compute() {
    return  left->compute() - right->compute();
}
