//5.Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
void main(){
	int price,discount;
	char ask;
	
	printf("Enter the price=");
	scanf("%d",&price);
	
	printf("If student enter Y not student enter N=");
	scanf(" %c",&ask);
	
	if(ask=='y'|| ask =='Y'){
		if(price>500){
			discount=price*0.20;
		}
		else{
			discount=price*0.10;
		}
	}
	else if(ask=='n'|| ask =='N'){
		if(price>600){
			discount=price*0.15;
		}
		else{
			discount=price*0;
		}
	
	}
		price = price - discount;
		printf("The price is %d and discount is %d",price,discount);
	
	
}
