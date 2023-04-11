void BehOrder(bitree T) {
    if (!T)
        return;
    if (T->left)
        BehOrder(T->left);
    if (T->right)
        BehOrder(T->right);
    printf("%d ", T->data);
    return;
}