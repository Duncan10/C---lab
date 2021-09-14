//
// Created by Duncan on 9/14/2021.
//

#ifndef EXPRESSION_TREE_NUMBEREXPRESSION_HPP
#define EXPRESSION_TREE_NUMBEREXPRESSION_HPP

#include "Expression.hpp"

/**
 * @class represents a tree leaf holding a double value
 */
class NumberExpression : public Expression {
public:
    /**
     * @brief constructor initialising number field and prompts a message to the console
     * @param num
     */
    NumberExpression(double num);
    /**
     * @brief virtual destructor
     */
    virtual ~NumberExpression();
    /**
     * @brief virtual compute method
     * @return number of expression
     */
    virtual double compute();
private:
    double number; //leaf number
};


#endif //EXPRESSION_TREE_NUMBEREXPRESSION_HPP
