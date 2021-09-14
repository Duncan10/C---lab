//
// Created by Duncan on 9/14/2021.
//

#include "BinaryExpression.hpp"
#include <iostream>
using namespace std;
BinaryExpression::BinaryExpression(Expression *left, Expression *right)
 : left(left), right(right) {
    cout << "Binary expression created!" << endl;
}
BinaryExpression::~BinaryExpression() {
    cout << "Binary expression destroyed!" << endl;
}