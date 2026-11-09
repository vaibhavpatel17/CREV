#include <stdio.h>
#include <stdlib.h>

int main() {
    int age=20;
    int *ptr=&age;//a pointer is specifically designed to hold memory address
    int **pptr=&ptr;
    printf("%p\n",(void*)&age);
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    printf("%p\n",(void*)&ptr);
    printf("%p\n",pptr);
    *ptr=25;
    printf("%d",age);
    return 0;
}