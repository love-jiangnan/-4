void MidOrder(bitree T) {
    if (!T)
        return;
    if (T->left)
        MidOrder(T->left);
    printf("%d ", T->data);
    if (T->right)
        MidOrder(T->right);
    return;
}