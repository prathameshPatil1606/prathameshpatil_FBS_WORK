// ASSIGNMENT 1
// 3. Write a program to check whether a given year is a leap year.

void main()
{
	int year=2024;
	
	if(year%100==0||year%4==0&&year%100!=0)
	{
		printf("The leap Year");
		
	}
	else
	{
		printf("Normal Year");
	 } 
	
}
