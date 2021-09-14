//
// Created by Duncan on 9/14/2021.
//

#ifndef EXPRESSION_TREE_EXPRESSION_HPP
#define EXPRESSION_TREE_EXPRESSION_HPP

/**
 * @class abstact base class for math expressions
 */
class Expression {
public:

    /**
     * @brief constructor
     */
     Expression();
     /**
      * @brief destructor
      */
      ~Expression();
    /**
     * @brief pure virtual class to be implemented by subclasses
     * @return result of computation as double
     */
    virtual double compute() = 0;

};


#endif //EXPRESSION_TREE_EXPRESSION_HPP
