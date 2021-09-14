//
// Created by Duncan on 9/14/2021.
//

#ifndef EXPRESSION_TREE_MINUSEXPRESSION_HPP
#define EXPRESSION_TREE_MINUSEXPRESSION_HPP


#include "BinaryExpression.hpp"

/**
 * @class MinusExpression
 */
class MinusExpression : public BinaryExpression{
public:
    /**
     * @brief inits left and right expression
     * @param left
     * @param right
     */
    MinusExpression(Expression *left, Expression *right);
    /**
     * @brief virtual destructor
     */
    virtual ~MinusExpression();
    /**
     * @brief substracts compute() result of left and right expression - actual summation
     * @return return difference of left.compute() and right.compute()
     */
    virtual double compute();
};


#endif //EXPRESSION_TREE_MINUSEXPRESSION_HPP
