#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int num,num4=n;
    if (n==3)
    {
        return c;   
    }
    else{
        
    
        num=a+b+c;
        a=b;
        b=c;
        c=num;
        
        c=find_nth_term(--num4,a,b,c);
       
        
    }
  return c;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

