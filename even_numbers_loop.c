#include<stdio.h>

int main(){
int a;
    printf("Even numbers 1-100 = ");

for(a=1;a<=100;a++){
    if(a%2==0){
        printf("%d, ",a);
    }
}
printf("\n\n");
     printf("Odd numbers 1-100 = ");

for(a=1;a<=100;a++){
    if(a%2!=0){

        printf("%d, ",a);
    }
}

return 0;
}