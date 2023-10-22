#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);
int checker(int num1, int num2);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int max1,max2,max3;
    max1=checker(a,b);
    max2=checker(c,max1);
    max3=checker(d,max2);
    return max3;
}

int checker(int num1, int num2)
{
    if(num1>num2){
        return num1;
    }
    else if(num2>num1)
    {
        return num2;
    }
    else {
        return num1;
    }
}
