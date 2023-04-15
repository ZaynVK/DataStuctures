 question: 2641 medium
code:- Given the root of a binary tree, replace the value of each node in the tree with the sum of all 
its cousins' values.
Two nodes of a binary tree are cousins if they have the same depth with different parents.
Return the root of the modified tree.
Note that the depth of a node is the number of edges in the path from the root node to it.
  
 Input: root = [5,4,9,1,10,null,7]
Output: [0,0,0,7,7,null,11]
Explanation: The diagram above shows the initial binary tree and the binary tree after changing the value of each node.
- Node with value 5 does not have any cousins so its sum is 0.
- Node with value 4 does not have any cousins so its sum is 0.
- Node with value 9 does not have any cousins so its sum is 0.
- Node with value 1 has a cousin with value 7 so its sum is 7.
- Node with value 10 has a cousin with value 7 so its sum is 7.
- Node with value 7 has cousins with values 1 and 10 so its sum is 11.

  
TreeNode* replaceValueInTree(TreeNode* root) {
        unordered_map<int, int> mp1;
        unordered_map<TreeNode*, int> mp2;

        function<void(TreeNode*, TreeNode*, int)> dfs1 = [&](TreeNode *node, TreeNode *fa, int d) {
            if (node == nullptr) return;
            mp1[d] += node->val;
            mp2[fa] += node->val;
            dfs1(node->left, node, d + 1);
            dfs1(node->right, node, d + 1);
        };
        dfs1(root, nullptr, 0);

        function<void(TreeNode*, TreeNode*, int)> dfs2 = [&](TreeNode *node, TreeNode *fa, int d) {
            if (node == nullptr) return;
            node->val = mp1[d] - mp2[fa];
            dfs2(node->left, node, d + 1);
            dfs2(node->right, node, d + 1);
        };
        dfs2(root, nullptr, 0);

        return root;
    }

The time complexity of this code is O(N)
  space complexity is O(N).
