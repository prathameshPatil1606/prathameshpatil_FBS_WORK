//3.Write a program to find greatest of three numbers using nested if-else.

void main(){
 int a,b,c;
 printf("Enter the number a");
 scanf("%d",&a);
 printf("Enter the numbber b");
 scanf("%d",&b);
 printf("Enter the numbber c");
 scanf("%d",&c);
 
 if(a>b&&a>c){
 	printf("The greater number is a");
 	
 }
 else if(b>c){
 	printf("The greater number is b");
 }
 else{
 	 	printf("The greater number is c");

 }
 
}
