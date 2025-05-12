class Solution {
public:
    // Helper function to collect all leaf node values in left-to-right order
    void getleaves(TreeNode* root, vector<int>& vec) {
        if (!root)
            return;

        // If current node is a leaf, add its value to the vector
        if (!root->left && !root->right) {
            vec.push_back(root->val);
            return;
        }

        // Recursively collect leaves from left and right subtrees
        getleaves(root->left, vec);
        getleaves(root->right, vec);
    }

    // Main function to compare the leaf sequences of two binary trees
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;

        // Collect leaf sequences from both trees
        getleaves(root1, leaves1);
        getleaves(root2, leaves2);

        // If number of leaves differ, trees are not leaf-similar
        if (leaves1.size() != leaves2.size())
            return false;

        // Compare leaf values one by one
        for (int i = 0; i < leaves1.size(); i++) {
            if (leaves1[i] != leaves2[i])
                return false;
        }

        // All leaf values matched
        return true;
    }
};
