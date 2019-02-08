

#include<stdio.h>
#include<string.h>
void main()
{
	char pro[20][6];
	int i=0,j=0,k=0,prot[20],no,wt=0,ta=0,ta1=0;
	printf("Enter the number of process (less than 20) you want to enter\n");
	scanf("%d",&no);
	printf("Enter the process name (max 5 characters) and burst time\n");
	for(i=0;i<no;i++)
	{
		printf("name : ");
		scanf("%s",&pro[i]);
		printf("time : ");
		scanf("%d",&prot[i]);
	}
	for(i=0;i<no;i++)
	printf("--------");
	printf("\n");
	for(i=0,j=0;i<no;i++,j++)
	{
		printf("|");
		printf(" %s\t",pro[i]);
	}
	printf("|\n");
	for(i=0;i<no;i++)
	printf("--------");
	printf("\n");
	for(i=0,j=0;i<=no;i++)
	{
		printf("%d\t",j);
		if(i<no)
		wt=wt+j;
		j=j+prot[i];
	}
	for(i=0,j=0;i<no;i++)
	{
		ta=ta+prot[i];
		printf("\nWaiting time for process %s is : %d, ",pro[i],j);
		printf("Turn Around time for process %s is : %d",pro[i],ta);
		ta1=ta1+ta;
		if(i<no)
		j=j+prot[i];
	}
	printf("\nAverage waiting time is : %d/%d = %f",wt,no,(float)wt/no);
	printf("\nAverage Turn Around time is : %d/%d = %f\n",ta1,no,(float)ta1/no);
}
