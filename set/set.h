#pragma once

/**
* Binary tree node.
*/
class TreeNode {
public:    
    TreeNode();
    TreeNode(int item);
    ~TreeNode();
    
public:
    int item;
    TreeNode *left;
    TreeNode *right;
};

/**
* Set of integer numbers.
*/
class Set {
public:
    Set();
    ~Set();
    
    /// Insert item into the set.
    void insert(int item);
    
    /// Check if item is in the set.
    bool find(int item) const;    
    
    /// Get size of the set.
    int size() const;
    
private:    
    TreeNode *root;        
};
