Problem Statement:
Check whether a given binary tree satisfies the Min-Heap property.

Input Format:
- First line contains integer N
- Second line contains level-order traversal

Output Format:
- Print YES if valid Min-Heap, otherwise NO

Example:
Input:
7
1 3 5 7 9 8 10

Output:
YES

Explanation:
Each parent node must be smaller than its children.
A binary tree is a valid Min-Heap if every parent node is smaller than or equal to its children.

Approach:
1. Traverse every node
2. If left child exists, check parent ≤ left child
3. If right child exists, check parent ≤ right child
4. Recursively validate left and right subtrees

Key Points:
- Every node must satisfy heap order
- Works directly on binary tree structure
💻 Code Solution
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int isMinHeap(struct Node* root) {
    if(root == NULL)
        return 1;

    if(root->left != NULL && root->data > root->left->data)
        return 0;

    if(root->right != NULL && root->data > root->right->data)
        return 0;

    return isMinHeap(root->left) && isMinHeap(root->right);
}
⏱️ Complexity Analysis
Time Complexity: O(n)
Space Complexity: O(h)