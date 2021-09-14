//
// Created by Duncan on 9/14/2021.
//

#ifndef EXPRESSION_TREE_BINARYEXPRESSION_HPP
#define EXPRESSION_TREE_BINARYEXPRESSION_HPP

#include "Expression.hpp"

/**
 * @class binary expression
 */
class BinaryExpression : public Expression {
public:
    /**
     * @brief constructor initializing left and right expression
     * @param left
     * @param right
     */
    BinaryExpression(Expression *left, Expression *right);
    /**
     * @brief virtual destructor
     */
    virtual ~BinaryExpression();

protected:
    Expression *left, *right;  //binary expression has both a left and a right expression

};


#endif //EXPRESSION_TREE_BINARYEXPRESSION_HPP
