//
//  list_funcs.h
//  test
//
//  Created by mason on 2018/4/19.
//  Copyright © 2018年 mason. All rights reserved.
//
#include "stdhe.h"
typedef struct Node{
    int stu_num;
    struct Node* next;
}Node;

typedef struct Node Node;
typedef struct Node* List;

Node* list_crt(int list_num);
void list_prt(Node* head);
Node* list_sort_select(Node* head);
Node* list_merge(Node* list1,Node* list2);
Node* list_circl(Node* list1,Node* list2);
void list_circl_prt(Node* head);
Node* list_crt_onenode(void);
