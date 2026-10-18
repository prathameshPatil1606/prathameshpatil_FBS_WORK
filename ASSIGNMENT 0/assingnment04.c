//4.Write a C program to swap two numbers using a temporary third variable.

void main()
{
	int a,b,temp;
	
	a=10;
	b=20;
	temp=0;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\nThe (a) value is %d",a);
	printf("\nThe (b) value is %d",b);
}
