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

typedef struct DT{
    int stu_num;
    struct DT* pres;
    struct DT* next;
}DT;
typedef struct DT* NDT;

Node* list_crt(int list_num);
void list_prt(Node* head);
Node* list_sort_select(Node* head);
Node* list_merge(Node* list1,Node* list2);
Node* list_circl(Node* list1,Node* list2);
void list_circl_prt(Node* head);
Node* list_crt_onenode(void);
Node* list_circl_crt(int list_num);
Node* list_circl_crt_onenode(void);
void list_circl_tail_prt(Node* tail);
NDT double_list_crt(int list_length);
void double_list_prt(NDT L);
NDT double_list_insert(NDT L,int double_list_len);
NDT double_list_delete(NDT L,int double_list_len);
void double_list_prt2(NDT head);
int double_list_len(NDT L);
