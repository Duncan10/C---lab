#include <iostream>
#include "NumberExpression.hpp"
#include "PlusExpression.hpp"
#include "MinusExpression.hpp"

int main() {
    NumberExpression two(2);
    NumberExpression three(3);
    PlusExpression rightChild(&three, &three); //3+3
    PlusExpression leftLeftChild(&two, &three); //2+3
    MinusExpression leftRightChild(&two, &two); //2-2
    PlusExpression leftChild(&leftLeftChild, &leftRightChild); //((2+3)+(2-2))
    MinusExpression root(&leftChild, &rightChild); //((2+3)+(2-2)) - (3+3) ... expect -1
    std::cout << "The result of this binary tree computation " << root.compute() << std::endl;
    return 0;
}
