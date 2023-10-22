#include <stdio.h>

void update(int *a,int *b) {
   int num=*a;
   *a+=*b;
    if(num>*b)
    {
        (*b)=(num)-(*b);
    }
    else if(*b>num) 
    {
    (*b)=(*b)-(num);
    }
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
