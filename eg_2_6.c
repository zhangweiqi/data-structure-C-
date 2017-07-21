#include<stdio.h>

int LocateElem_Sq(SqList L, ElemType e,
			Status(*compare)(Elemtype, ElemType){
    i = 1;
    p = L.elem;
    while(i<=L.length && !(*compare)(*p++,e)) ++i;
    if(i<=L.length) return i;
    else return 0;
}

