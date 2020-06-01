#include<stdio.h>
void main(){
int h,ts;
float cc;
printf("Enter the hardness (>50), carbon content(<0.7) and tensile strength(>5600)");
scanf("%d %f %d",&h,&cc,&ts);
if(h>50 && cc<0.7 && ts>5600){
printf("Grade is 10");
}
else if(h>50 && cc<0.7){
printf("Grade is 9");
}
else if(cc<0.7 && ts>5600){
printf("Grade is 8");
}
else if(h>50 && ts>5600){
printf("Grade is 7");
}
else if(h>50 && cc>0.7 && ts<5600){
printf("Grade is 6");
}else{
printf("Grade is 5");
}
}
