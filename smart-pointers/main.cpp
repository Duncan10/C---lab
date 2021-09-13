#include <iostream>
#include "TreeNode.hpp"

int main() {
    TreeNodePtr node = TreeNode::createNode(1, TreeNode::createNode(2), TreeNode::createNode(3));
    //overwriting node to examine smart pointer behaviour, watch console prompts
    node = TreeNode::createNode(4, TreeNode::createNode(5), TreeNode::createNode(6));
    std::cout << "leaving program" << std::endl;
    return 0;
}
