int k, h;
int main(void)
{
    menu();
    scanf_s("%d", &k);
    switch (k) {
    case 1: {printf("请输入根的值\n");
        scanf_s("%d", &h);
        Init(h);
        show(root);
        break;
    }
    case 2: {
        printf("由于未初始化，请输入初始根值\n");
        scanf_s("%d", &h);
        Init(h);
        while (h != -1)
        {
            printf("请输入插入的值\n");
            scanf_s("%d", &h);
            if (h != -1)insert(h);
        }
        menu1();
        break;
    }
    case 3: {
        printf("未初始化，请先初始化内容\n");
        show(root);
        break;
    }
    case 4: {
        printf("未初始化，请先初始化内容\n");
        printf("由于未初始化，请输入初始根值,输入值为-1，退出输入\n");
        scanf_s("%d", &h);
        if (h == -1)break;
        else {
            Init(h);
            while (h != -1)
            {
                printf("请输入插入的值\n");
                scanf_s("%d", &h);
                if (h != -1)insert(h);
            }
            menu1();
            while (h != -1)
            {
                printf("请输入插入的值\n");
                scanf_s("%d", &h);
                if (h != -1)delete_node(root, h);
            }
            menu1();
            break;
        }
    }
    case 5: {
        exit(0);
        break;
    }
    }
    return 0;
}