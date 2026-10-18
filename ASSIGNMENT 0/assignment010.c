//10. Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.
void main()
{
	int math=60,english=74,marathi=90,history=95,science=80,totalmarks;
	float percentage;
	
	totalmarks=math+english+marathi+history+science;
	printf("The Total marks is %d",totalmarks);
	
	percentage=totalmarks/5.0;
	
	printf("\nThe Percentage is %f",percentage);
	
}
