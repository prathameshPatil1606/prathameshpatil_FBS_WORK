//ASSIGNMENT 1
//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.

void main()
{
	int basic_salary=5000,da,ta,hra,total_salary;
	
	if(basic_salary <= 5000)
	{
		da=basic_salary*0.10;
		ta=basic_salary*0.20;
		hra=basic_salary*0.25;
	}
	else
	{
		da=basic_salary*0.15;
		ta=basic_salary*0.25;
		hra=basic_salary*0.30;	
	}
	
	total_salary=basic_salary+da+ta+hra;
	
	printf("The total salary is %d",total_salary);
}
