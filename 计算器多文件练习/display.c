#include <stdio.h>

void add(int a,int b)
{
    printf("%d+%d�Ľ����%d\n",a,b,a+b);
}
void sub(int a,int b)
{
    printf("%d-%d�Ľ����%d\n",a,b,a-b);
}

void mul(int a,int b)
{
    printf("%d*%d�Ľ����%d\n",a,b,a*b);
}
void chu(int a,int b)
{
    float c=a;
    float d=b;
    if(d!=0)
      {
      	printf("%.1f/%.1f�Ľ����%.2f\n",c,d,c/d);
      }else {
	printf("��������Ϊ0");
      }
}
