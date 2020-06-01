#include<stdio.h>
void main(){
int n;
printf("Enter the number of days");
scanf("%d",&n);
if(n<=5){
printf("your fine is 50 paise");
} else if(n>5 && n<=10){
printf("your fine is 1 Rs");
} else if(n>10 && n<=30){
printf("your fine is 5 Rs");
} else if(n>30){
printf("your membership is cancelled");
}

}
