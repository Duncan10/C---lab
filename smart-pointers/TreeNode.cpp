//
// Created by Duncan on 9/13/2021.
//

#include <iostream>
#include "TreeNode.hpp"


TreeNodePtr TreeNode::createNode(int content, TreeNodePtr left, TreeNodePtr right) {
    TreeNodePtr node(new TreeNode(content, left, right));
    if (left) {
        left->setParent(node) ; // set parent node
    }
    if (right) {
        right->setParent(node) ; // set parent node
    }
    return node;
}
TreeNode::TreeNode(int content, TreeNodePtr left, TreeNodePtr right):
        leftChild(left), rightChild(right), content(content)
{
    std::cout << "TreeNode created! content:" << content << std::endl;
}
TreeNode::~TreeNode() {
    std::cout<<"TreeNode destroyed! content: " << content << std::endl;
}

void TreeNode::setParent(const TreeNodePtr &p) {
    this->parent=p;
}