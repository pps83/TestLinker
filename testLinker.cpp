#include <stdio.h>

void sayHello()
{
    printf("hello\n");
}

extern "C"
{
    void p4nenc256v32();
    void p4ndec256v32();
}

void bigFunctionTest()
{
    p4nenc256v32();
    p4ndec256v32();
}
