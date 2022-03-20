#include<stdio.h>
int main()
{
    char character,h;
    printf("enter the character: ");
    scanf("%c", &character);
    h=character;
    if(h>='a'&& h<='z'|| h>='A'&& h<='Z'){
        printf("%c is an Alphabet\n",h);
    }
    else if(h>='0' &&  h<='9'){
        printf("%c is a Digit\n",h);
    }
    else{
        printf("%c is a Special Symbol\n",h);
    }
    return 0;
}