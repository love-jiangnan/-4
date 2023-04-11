void menu1() {
    printf("6递归/7非递归");
    int c;
    scanf_s("%d", &c);
    switch (c) {
    case 6: {printf("8前序/9中序/10后序/11层序");
        scanf_s("%d", &c);
        switch (c) {
        case 8:PreOrder(root); break;
        case 9:MidOrder(root); break;
        case 10:BehOrder(root); break;
        case 11:FloorPrint(root); break;
        }
    }
          break;
    case 7: {printf("12前序/13中序/14后序");
        scanf_s("%d", &c);
        switch (c) {
        case 12:_Preorder(root); break;
        case 13:_Midorder(root); break;
        case 14:_Postorder(root); break;
        }
    }
    }
}