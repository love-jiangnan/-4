void _Postorder(bitree t) {
    Node* Stack[STACK_INIT_SIZE];
    Node* pre = NULL;
    int flag, top = 0;
    if (t != NULL) {
        do {
            while (t != NULL) {
                Stack[top++] = t; t = t->left;
            }
            pre = NULL; flag = 1;
            while (top && flag) {
                t = Stack[top - 1];
                if (t->right == pre) {
                    printf("%d ", t->data); top--;  pre = t;
                }
                else { t = t->right; flag = 0; }
            }
        } while (top);
        printf("\n");
    }
}