//
// Created by Duncan on 9/14/2021.
//

#ifndef EXPRESSION_TREE_PLUSEXPRESSION_HPP
#define EXPRESSION_TREE_PLUSEXPRESSION_HPP


#include "BinaryExpression.hpp"

/**
 * @class PlusExpression
 */
class PlusExpression : public BinaryExpression{
public:
    /**
     * @brief inits left and right expression
     * @param left
     * @param right
     */
    PlusExpression(Expression *left, Expression *right);
    /**
     * @brief virtual destructor
     */
    virtual ~PlusExpression();
    /**
     * @brief adds compute() result of left and right expression - actual summation
     * @return sum of left.compute() and right.compute()
     */
    virtual double compute();
};


#endif //EXPRESSION_TREE_PLUSEXPRESSION_HPP
