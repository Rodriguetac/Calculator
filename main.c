#include <stdio.h>
#include <stdlib.h>

int addition(int a,int b)
{
    return a + b;
}
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    printf("a+b=%d\n",addition(a,b));
    return 0;
}
