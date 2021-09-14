cmake_minimum_required(VERSION 3.20)
project(expression_tree)

set(CMAKE_CXX_STANDARD 14)

add_executable(expression_tree main.cpp Expression.cpp Expression.hpp NumberExpression.cpp NumberExpression.hpp BinaryExpression.cpp BinaryExpression.hpp PlusExpression.cpp PlusExpression.hpp MinusExpression.cpp MinusExpression.hpp)
