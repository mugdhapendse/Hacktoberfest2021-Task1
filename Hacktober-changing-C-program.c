#include <stdio.h>

int main()
{
    char name,country,skill;
    int age;
    printf("Welcome to Hacktober-fest 2021!\n");
    printf("Enter your name : ");//Get User name
    scanf("%s",&name);
    printf("Enter your Country of Residence : ");//Get user country
    scanf("%s",&country);
    printf("Enter your Age : ");//Get user Age
    scanf("%d",&age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : ");//Get user skill level
    scanf("%s",skill);
    printf("Thank you %s Happy Hacking!\n",name);//Thank the user

    return 0;
}
// data type of "age" wasnt specified giving error,Hacktober fest 2020-> Hacktober-fest 2021; Residance -> Residence
