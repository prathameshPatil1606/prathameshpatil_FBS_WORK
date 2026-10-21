//2. Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.

void main(){
	int a,b,c;
	
	printf("Enter the first sides of traingle=");
	scanf("%d",&a);
		printf("Enter the second sides of traingle=");
	scanf("%d",&b);
		printf("Enter the third sides of traingle=");
	scanf("%d",&c);
	
	if(a==b&&b==c&&a==c){
		printf("The traingle is Equilateral");
	}
	else if(a==b||a==c||b==c){
		printf("The Traingle is Isosceles");
	}
	else{
	    printf("The Traingle is scalene");	
	}
}
