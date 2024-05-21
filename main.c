#include<stdio.h>
#include<stdbool.h>

int main()
{
    char str[2000];
    int option;
    printf("Welcome to Notes App!!!!!! \n");
    printf("Please Enter what you want to write: \n");
    gets(str);
    printf("************************************************************************\n");
    printf("do you want to show the text you just stored ? \n");
    printf("type 1 for yes and 0 for no. \n");
    scanf("%d",&option);
    printf("************************************************************************\n");
    if (option==1)
    {
        printf("the Text you entered is:");
        puts(str);
    }
    else{
        printf("thanks for using! \n");
    }
    return 0;
}