#include<stdio.h>

Status ListInsert_Sq(SqList &L, int i, ElemType e){
    //insert a new elem e before No.i elem
    if (i < 1||i > L.length+1) return ERROR;
    if (L.length >= L.listsize){
    	newbase = (ElemType *)realloc(L.elem,
			(L.listsize+LISTINCREMENT) * sizeof (ElemType));
	if (!newbase)eixt(OVERFLOW);
	L.elem = newbase;
	L.listsize += LISTINCREMENT;
    }
    q = &(L.elem[i-1]);
    for (p = &(L.elem[L.length - 1]);p >= q; --p) *(p+1) = *p;

    * q = e;
    ++L.length;
    return OK;
}
