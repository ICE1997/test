//
//  list_funcs.c
//  test
//
//  Created by mason on 2018/4/19.
//  Copyright © 2018年 mason. All rights reserved.
//

#include "list_funcs.h"

Node* list_crt_onenode(void){//创建一个节点
    Node* node;
    if((node=(Node*)malloc(sizeof(Node)))==NULL){
        printf("Failed to create the node!\n");//创建失败时的反馈
    }
    node->next=NULL;
    return node;
}

Node* list_crt(int list_num){//创建带头节点的链表
    Node* head,*tail;
    Node* new_data;
    head=list_crt_onenode();//创建头指针
    tail=head;//将头指针节点给tail
    if(list_num<=0){
        printf("The number you enterd is invalid!\n");
    }//当输入不符合实际时
    else{
        while(list_num>0){
            if((new_data=(Node*)malloc(sizeof(Node)))==NULL){
                printf("Failed to create the node!\n");
            }//新节点创建失败时反馈
            else{
                  scanf("%d",&new_data->stu_num);//数据录入
                  new_data->next=NULL;//必须操作
//                new_data->next=head->next;
//                head->next=new_data;//头插法
                tail->next=new_data;//新节点加入
                tail=new_data;//将tail指向新数据，也就是新数据成了尾节点
                list_num--;//我很微小，但你一定要写我
            }
            
        }
    }
    return head;
}

void list_prt(Node* head){//单链表遍历输出
    int cnt=0;//用于计数
    if(head->next==NULL){//链表为空时反馈
        printf("The list is empty!\n");
    }
    else{
        head=head->next;
        while (head) {
            printf("%4d\t",head->stu_num);
            cnt++;
            head=head->next;
            if(cnt%10==0){
                printf("\n");
            }//常规操作
        }
        printf("\n");//最后换行一下
    }
}
void list_circl_prt(Node* tail){//循环列表输出
    Node *p = tail -> next->next;//
    int cnt=0;
    while(p != tail -> next ){
        printf("%d\t",p->stu_num);
        p=p->next;
        cnt++;
        if(cnt%10==0){
            printf("\n");
        }
    }
    printf("\n");
}
Node* list_sort_select(Node* head){
    Node* p1,*p2,*temp_node;
    Node temp_data;
    for(p1=head->next;p1->next;p1=p1->next){
        temp_node=p1;
        for(p2=p1->next;p2;p2=p2->next){
            if(temp_node->stu_num > p2->stu_num){
                temp_node=p2;
            }
        }
        if(temp_node!=p1){
            temp_data.stu_num=p1->stu_num;
            p1->stu_num=temp_node->stu_num;
            temp_node->stu_num=temp_data.stu_num;
        }
    }

    return head;
}

Node* list_merge(Node* list1,Node* list2){//两个非递减数链表并为一个非递减链表
    Node* list3;
    Node* p1;
    Node* p2;
    Node* p3;
    if(list1==NULL||list2==NULL){
        if(list1==NULL&&list2!=NULL){
            list3=list2;
        }else{
            list3=list1;
        }
    }else{
        p1=list1->next;
        p2=list2->next;
        p3=list3=list1;
        while(p1&&p2){
            if(p1->stu_num<=p2->stu_num){
                p3->next=p1;
                p3=p1;
                p1=p1->next;
            }else{
                p3->next=p2;
                p3=p2;
                p2=p2->next;
            }
        }
        p3 -> next = p1 ? p1 : p2;//if p1!=NULL; p3->next=p1;  else p3->next=p2;
        free(p2);
    }
    return list3;
}

Node* list_circl(Node* list1,Node* list2){
    Node* p1;
    Node* p2;
    Node* p3;
    p1=list1;
    p2=list2;
    while(p1->next){
        p1=p1->next;
    }
    p1->next=list1;
    
    while(p2->next){
        p2=p2->next;
    }
    p2->next=list2;

    p3=list2->next;
    p2->next=list1;
    p1->next=p3;
    
    free(list2);
    return p2;
}
