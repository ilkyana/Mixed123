#include<stdio.h>
void main(){
int space=0;
int space1=-1;
for(int i = 0 ; i<7 ; i++){
for(int j = 65 ; j<=71-i ; j++){
printf("%c  ",j);
}
while(space!=0){
printf("   ");
space--;
}
space1 = space1+2;
for(int j = 71-i ; j>=65 ; j--){
if(j==71){
continue;
}
printf("%c  ",j);
}
space = space1;
printf("\n");
}

}
