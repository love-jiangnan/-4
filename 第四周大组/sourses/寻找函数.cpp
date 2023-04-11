bool search(Node* root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
            return true;
        else if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return false;
}