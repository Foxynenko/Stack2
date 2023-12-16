#include <iostream>
#include <vector>

using namespace std;

// Визначення структури вузла бінарного дерева
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Рекурсивна функція для обходу бінарного дерева в порядку (Inorder Traversal)
void inorderTraversalRecursive(TreeNode* root, vector<int>& result) {
    if (root) {
        inorderTraversalRecursive(root->left, result);
        result.push_back(root->val);
        inorderTraversalRecursive(root->right, result);
    }
}

// Функція для обходу бінарного дерева в порядку (Inorder Traversal)
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    inorderTraversalRecursive(root, result);
    return result;
}

int main() {
    // Приклад 1
    TreeNode* root1 = new TreeNode(1);
    root1->right = new TreeNode(2);
    root1->right->left = new TreeNode(3);

    vector<int> result1 = inorderTraversal(root1);
    cout << "Example 1: [";
    for (int val : result1) {
        cout << val << " ";
    }
    cout << "]" << endl;

    // Приклад 2
    TreeNode* root2 = nullptr;

    vector<int> result2 = inorderTraversal(root2);
    cout << "Example 2: [";
    for (int val : result2) {
        cout << val << " ";
    }
    cout << "]" << endl;

    // Приклад 3
    TreeNode* root3 = new TreeNode(1);

    vector<int> result3 = inorderTraversal(root3);
    cout << "Example 3: [";
    for (int val : result3) {
        cout << val << " ";
    }
    cout << "]" << endl;

    return 0;
}
