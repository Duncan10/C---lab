//
// Created by Duncan on 9/13/2021.
//

#ifndef SMART_POINTERS_01_TREENODE_HPP
#define SMART_POINTERS_01_TREENODE_HPP
#include <memory>

class TreeNode;
/**
 * @typedef std::shared_ptr<TreeNode>
 */
typedef std::shared_ptr<TreeNode> TreeNodePtr; // typedef for better readability
/**
 * @typedef std::weak_ptr<TreeNode>
 */
typedef std::weak_ptr<TreeNode> TreeNodeWeakPtr; //typedef for better readability
class TreeNode {
public:
/** create a new tree node and make it shared */
    static TreeNodePtr createNode(int content, TreeNodePtr left = TreeNodePtr(), TreeNodePtr right =
    TreeNodePtr());
    ~TreeNode();
    void setParent(const TreeNodePtr &p); // set parent of this node
private:
    TreeNode(int content, TreeNodePtr left, TreeNodePtr right); // create a tree node
    TreeNodePtr leftChild, rightChild;// left , right child and parent
    TreeNodeWeakPtr parent;
    int content; // node content
};

#endif //SMART_POINTERS_01_TREENODE_HPP
