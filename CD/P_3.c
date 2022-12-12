#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int Cheak_Password(char Password[])
{
    int  len  = strlen(Password);
    int Flag_1 = 0 , Flag_2 = 0 , Flag_3 = 0 , Flag_4 = 0;
    for(int i = 0 ; i <= len ; i++)
    {
        if(Password[i]>= 65 && Password[i]<= 90) //Cheak upper case
        {
            Flag_1 = 1;
        }
        if(Password[i]>= 97 && Password[i] <= 122) //Cheak Lower cass
        {
            Flag_2 = 1;
        }
        if(Password[i] >= 0 && Password[i] <= 9) //Cheak 0 to 9
        {
            Flag_3 = 1;
        }
        if (Password[i] == '!' || Password[i] == '@' || Password[i] == '#' || Password[i] == '%' || Password[i] == '_')
        {
            Flag_4 = 1;
        } 
    }
    if(Flag_1 == 1 && Flag_2 == 1 && Flag_3 ==1 && Flag_4 ==1)
    {
        printf("Sucess");
    }
    else
    {
        printf("Fail");
        if(Flag_1 != 1)
            printf("\nUppercase Missing.");
        if(Flag_2 != 1)
            printf("\nLowercase Missing.");
        if(Flag_3 != 1)
            printf("\nNumber Missing.");
        if(Flag_4 != 1)
            printf("\nSpecial Charater Missing.");
    }

}
int main()
{
    char user[50];
    char passwd[15];
    printf("Enter Username : ");
    scanf("%s",&user);
    printf("Enter Password : ");
    scanf("%s",&passwd);
    Cheak_Password(passwd);
    return 0;
}