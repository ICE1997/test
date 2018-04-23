//
//  main.c
//  test
//
//  Created by mason on 2018/4/19.
//  Copyright © 2018年 mason. All rights reserved.
//

#include "list_funcs.h"
int main(void){
    int list_num;
//    Node* list_1;
//    Node* list_2;
////    Node* list_3;
////    Node* list_4;
//    Node* list_conbn;
//    Node* list_cir;
    NDT NDT_list;
    printf("How many elements you wanna add to list?");
    scanf("%d",&list_num);
    NDT_list=double_list_crt(list_num);
    double_list_prt(NDT_list);
//    printf("How many elements you wanna add to list?");
//    scanf("%d",&list_num);
//    list_1=list_crt(list_num);
//    system("clear");
//    printf("The first list is:\n");
//    list_prt(list_1);
//    list_1=list_sort_select(list_1);
//    printf("After sort:\n");
//    list_prt(list_1);
//
//    printf("How many elements you wanna add to list?");
//    scanf("%d",&list_num);
//    list_2=list_crt(list_num);
//    system("clear");
//    printf("The second list is:\n");
//    list_prt(list_2);
//    list_2=list_sort_select(list_2);
//    printf("After sort:\n");
//    list_prt(list_2);
//    printf("\n");
//    printf("\n");
//    printf("Now,let me merge the two non-decreasing lists.\n");
//    list_conbn=list_merge(list_1, list_2);
//    list_prt(list_conbn);
    
//    printf("How many elements you wanna add to list?");
//    scanf("%d",&list_num);
//    list_3=list_circl_crt(list_num);
//    list_circl_tail_prt(list_3);
//
//    printf("How many elements you wanna add to list?");
//    scanf("%d",&list_num);
//    list_4=list_circl_crt(list_num);
//    list_circl_tail_prt(list_4);//一些无聊的代码
//
//    printf("Now,let me make a circular-list.\n");
//    list_cir=list_circl(list_1,list_2);
//    list_circl_prt(list_cir);//和上个合并程序冲突，所以隐藏；
    


    return 0;
}
