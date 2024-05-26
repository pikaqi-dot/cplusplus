#include <iostream>
#include <stack>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void postorderTraversalRecursive(Node *root) {
    if (root == NULL) {
        return;
    }

    postorderTraversalRecursive(root->left);
    postorderTraversalRecursive(root->right);
    cout << root->data << " ";
}

void postorderTraversalIterative(Node *root) {
    if (root == NULL) {
        return;
    }

    stack<Node *> s;
    Node *curr = root;

    while (curr != NULL || !s.empty()) {
        while (curr != NULL) {
            s.push(curr);
            curr = curr->left;
        }

        if (!s.empty()) {
            curr = s.top();
            s.pop();

            if (curr->right == NULL) {
                cout << curr->data << " ";
                curr = NULL;
            } else {
                curr = curr->right;
            }
        }
    }
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(2);
    root->left->right = new Node(7);
    root->right->right = new Node(20);
    cout << "Postorder traversal (recursive): ";
    postorderTraversalRecursive(root);
    cout << endl;
    cout << "Postorder traversal (iterative): ";
    postorderTraversalIterative(root);
    cout << endl;
    return 0;
}
