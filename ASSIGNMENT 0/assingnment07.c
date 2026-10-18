//7. Write a C program to convert given minutes into hours and remaining minutes.
void main(){
 int minutes=150,hour,remaining_minutes;
 
 hour= minutes/60;
 
 remaining_minutes= minutes%60;
 
 printf("The time is %d hour and %d minutes", hour,remaining_minutes);	
}
