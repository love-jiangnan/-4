void insert(int key)
{
    //定义一个临时指针 用于移动
    Node* temp = root;//方便移动 以及 跳出循环
    Node* prev = NULL;//定位到待插入位置的前一个结点
    if (temp == NULL)printf("未初始化根，请先初始化根");
    else while (temp != NULL)
    {
        prev = temp;
        if (key < temp->data)
        {
            temp = temp->left;
        }
        else if (key > temp->data)
        {
            temp = temp->right;
        }
        else
        {
            return;
        }
    }

    if (key < prev->data)
    {
        prev->left = (Node*)malloc(sizeof(Node));
        prev->left->data = key;
        prev->left->left = NULL;
        prev->left->right = NULL;
    }
    else
    {
        prev->right = (Node*)malloc(sizeof(Node));
        prev->right->data = key;
        prev->right->left = NULL;
        prev->right->right = NULL;
    }
}