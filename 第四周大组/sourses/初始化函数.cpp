void Init(int key)
{
    root = (Node*)malloc(sizeof(Node));
    root->data = key;
    root->left = NULL;
    root->right = NULL;
}

