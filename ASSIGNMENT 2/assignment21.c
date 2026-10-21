//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

void main()
{
	int a,b,res;
	char op;
	
	printf("Enter the first numbers=");
	scanf("%d",&a);
	printf("Enter the second numbers=");
	scanf("%d",&b);

    printf("Enter the Operator");
    scanf(" %c",&op);
    
    if(op=='+'){
    	res=a+b;
    	printf("%d",res);
	}
	else if(op=='-'){
			res=a-b;
    	printf("%d",res);
	}
	else if(op=='*'){
			res=a*b;
    	printf("%d",res);
	}
	else if(op=='/'){
			res=a/b;
    	printf("%d",res);
	}
	else if(op=='%'){
			res=a%b;
    	printf("%d",res);
	}
	
}
