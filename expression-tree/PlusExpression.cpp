//
// Created by Duncan on 9/14/2021.
//
#include <iostream>
#include "PlusExpression.hpp"
using namespace std;

PlusExpression::PlusExpression(Expression *left, Expression *right)
: BinaryExpression(left, right){
    cout << "PlusExpression created!" << endl;
}
PlusExpression::~PlusExpression(){
    cout << "PlusExpression destroyed!" << endl;
}
double PlusExpression::compute() {
    return  right->compute()+left->compute();
}