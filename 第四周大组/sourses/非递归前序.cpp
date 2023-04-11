//  非递归-先序遍历
void _Preorder(bitree t) {
    Node* Stack[STACK_INIT_SIZE];
    int top = 0;						//创建栈
    Node* p = NULL;				//置空栈
    if (t != NULL) {
        Stack[top++] = t;
        while (top) {
            p = Stack[--top]; printf("%d ", p->data);
            if (p->right != NULL)
                Stack[top++] = p->right;
            if (p->left != NULL)
                Stack[top++] = p->left;
        }
        printf("\n");
    }
}