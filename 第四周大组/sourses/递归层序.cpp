void FloorPrint(bitree T)  //层序遍历
{
    bitree temp[100];   //创建pTreeNode指针类型的指针数组
    int in = 0;
    int out = 0;

    temp[in++] = T;  //先保存二叉树根节点

    while (in > out)
    {
        if (temp[out])
        {
            printf("%d ", temp[out]->data);
            temp[in++] = temp[out]->left;
            temp[in++] = temp[out]->right;
        }
        out++;
    }
}