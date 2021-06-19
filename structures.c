// structures 

struct Student
{
	int Roll_num;
	char Student_Name[30];
	float Percentage;	
};

#include<stdio.h>

main()
{	
	//int n;
	//printf("Enter Number Of Students:: \n");
	//scanf("%d",&n);
	struct Student obj[1];
	
	printf("Enter Student Details::\n ");
	int i=0;
	for(i=0;i<1;i++)
	{
		scanf("%d",obj[i].Roll_num);
		scanf("%c",obj[i].Student_Name);
		scanf("%f",obj[i].Percentage);
		printf("%d", obj[i].Roll_num );
		printf("%c",obj[i].Student_Name);
		printf("%f",obj[i].Percentage);
	}
}
