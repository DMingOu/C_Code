#include <stdio.h>
#include "getNum.h"
#include "display.h"

int main()
{
    int num_1,num_2;

    num_1=getNum_1();
    num_2=getNum_2();

    add(num_1,num_2);
    sub(num_1,num_2);
    mul(num_1,num_2);
    chu(num_1,num_2);

    return 0;
}
