Node* prev_node(Node* root, Node* node, int key)
{
    if (root == NULL || node == root)
    {
        return node;
    }
    else
    {
        if (root->left != NULL && root->left->data == key)
        {
            return root;
        }
        else if (root->right != NULL && root->right->data == key)
        {
            return root;
        }
        else if (key < root->data)
        {
            return prev_node(root->left, node, key);
        }
        else
        {
            return prev_node(root->right, node, key);
        }
    }
}