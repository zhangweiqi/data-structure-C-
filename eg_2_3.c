#include<stdio.h>

Status InitList_Sq(SqList &L){
    //create a emtpy liner list
    L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (! L.elem) exit(OVERFLOW);
    L.length = 0;			//the length of empty list is 0
    L.listsize = LIST_INIT_SIZE;	//init  storge 
    return OK;
}

