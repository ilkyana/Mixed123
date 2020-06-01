#include<stdio.h>
void main(){
int n;
printf("Enter the hours of your work");
scanf("%d",&n);
if(n>1 && n<=3){
printf("Highly Efficient");
} else if(n>2 && n<=4){
printf("Order to improve speed");
} else if(n>4 && n<=5){
printf("Give training to improve speed");
}
else if(n>5){
printf("Leave the company");
}
}
