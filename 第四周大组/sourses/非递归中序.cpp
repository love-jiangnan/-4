void _Midorder(bitree t)      //t为根指针
{
    Node* Stack[STACK_INIT_SIZE];//定义指针栈
    int top = 0;                  //置空栈
    do {
        while (t)               //根指针t表示的为非空二叉树
        {
            if (top == STACK_INIT_SIZE) exit(OVERFLOW);//栈已满,退出
            Stack[top++] = t;             //根指针进栈
            t = t->left;             //t移向左子树
        }   //循环结束表示以栈顶元素的指向为根结点的二叉树
        //的左子树遍历结束
        if (top)                    //为非空栈
        {
            t = Stack[--top];             //弹出根指针
            printf("%d ", t->data);    //访问根结点
            t = t->right;             //遍历右子树
        }
    } while (top || t); //父结点未访问，或右子树未遍历
}