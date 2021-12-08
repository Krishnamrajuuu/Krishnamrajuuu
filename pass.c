#include<stdio.h>
void main()
{
	int eng,mat,phy,che,cs,total,perc;
	printf("enter the marks for eng,mat,phy,che,cs");
	scanf("%d%d%d%d%d", &eng,&mat,&phy,&che,&cs);
	total = eng+mat+phy+che+cs;
	perc = total/5;
	if(eng>=35 && mat>=35 && phy>=35 && che>=35 &&cs>=35)
	{
		printf("pass\n");
		printf("total marks out of %d is %d\n", 500,total);
		printf("percentage: %d\n", perc);
		printf("grade: ");
		if(perc>=90)
		{
			printf("o");
		}
		else if(perc>=80)
		{
			printf("a");
		}
		else if(perc>=70)
		{
			printf("b");
		}
		else if(perc>=60)
		{
			printf("c");
		}
		else if(perc>=50)
		{
			printf("d");
		}
}
	else
	{
		printf("fail");
	}
}
