int delete_node(Node* node, int key)
{
    if (node == NULL)
    {
        return -1;
    }
    else
    {
        if (node->data == key)
        {
            //当我执行删除操作 需要先定位到前一个结点
            Node* tempNode = prev_node(root, node, key);
            Node* temp = NULL;
            /*
            如果右子树为空 只需要重新连接结点
            叶子的情况也包含进去了 直接删除
            */
            if (node->right == NULL)
            {
                temp = node;
                node = node->left;
                /*为了判断 待删除结点是前一个结点的左边还是右边*/
                if (tempNode->left->data == temp->data)
                {
                    Node* free_node = temp;//释放用的指针
                    tempNode->left = node;
                    free(free_node);
                    free_node = NULL;
                }
                else
                {
                    Node* free_node = temp;//释放用的指针
                    tempNode->right = node;
                    free(free_node);
                    free_node = NULL;
                }
            }
            else if (node->left == NULL)
            {
                temp = node;
                node = node->right;
                if (tempNode->left->data == temp->data)
                {
                    Node* free_node = temp;//释放用的指针
                    tempNode->left = node;
                    free(free_node);
                    free_node = NULL;
                }
                else
                {
                    Node* free_node = temp;//释放用的指针
                    tempNode->right = node;
                    free(free_node);
                    free_node = NULL;
                }
            }
            else//左右子树都不为空
            {
                temp = node;
                /*往左子树 找最大值*/
                Node* left_max = node;//找最大值的临时指针
                left_max = left_max->left;//先到左孩子结点
                while (left_max->right != NULL)
                {
                    temp = left_max;
                    left_max = left_max->right;
                }
                node->data = left_max->data;
                if (temp != node)
                {
                    temp->right = left_max->left;
                    free(left_max);
                    left_max = NULL;
                }
                else
                {
                    temp->left = left_max->left;
                    free(left_max);
                    left_max = NULL;
                }
            }

        }
        else if (key < node->data)
        {
            delete_node(node->left, key);
        }
        else if (key > node->data)
        {
            delete_node(node->right, key);
        }
    }
}