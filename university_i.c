#include<stdio.h>
void main(){
int a , b;
printf("Enter the number in main subject and sunsidy subject");
scanf("%d %d",&a,&b);
if(a>=55 && b>=45){
printf("You are qualify for a degree");
} else if(a==55){
printf("He should get 55 or more in B");
}  else if(b==55){
printf("He should get atlest 45 in A");
}  else if(b==45 && a>=65){
printf("He is allowed to freappear in examination");
} else{
printf("He is failed");
}
}
