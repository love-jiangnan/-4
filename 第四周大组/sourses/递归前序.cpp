void PreOrder(bitree T) {
    if (!T)
        return;
    printf("%d ", T->data); //打印等操作
    PreOrder(T->left);
    PreOrder(T->right);
    return;
}