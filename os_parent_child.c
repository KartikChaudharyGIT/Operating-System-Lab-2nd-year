#include<stdio.h>
#include<sys/types.h>
#define count 5000
void chuldprocess (void);
void parentprocess (void);
void main(void)
{int id;
id=fork();
if(id==0)
childprocess();
else
parentprocess();
}
void childprocess(void)
{
int i;
for(i=1;i<count;i++)
printf("child");
}
void parentprocess(void)
{
int i;
for(i=1;i<count;i++)
printf("parent");
}


