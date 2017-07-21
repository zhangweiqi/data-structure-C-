#include<stdio.h>

void MergeList_Sq(SqList La, SqList Lb, SqList &Lc){
    pa = La.elem; pb = Lb.elem;
    Lc.listsize = Lc.length = La.length + Lb.length;
    pc = Lc.elem = (ElemType*)malloc(Lc.listsize*sizeof(ElemType));
    if(!Lc.elem)exit(OVERFLOW);
    pa_last=La.elem+La.length-1;
    pb_last=Lb.elem+Lb.length-1;
    while(pa<=pa_last&&pb<=pa_last){
        if(*pa<=*pb)*pc++=*pa++;
	else *pc++=*pb++;
    }
    while(pa<=pa_last)*pc++=*pa++;
    while(pb<=pb_last)*pc++=*pb++;
}

