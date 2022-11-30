#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int i =0;
    int vovels = 0 , consonant = 0 , digits = 0 , symbols = 0 , space = 0 ;
    FILE *fp;
    char ch;
    fp = fopen("P2.txt","r");
    if(fp == NULL)
    {
        printf("File not opened.");
        exit(1);
    }
    ch = fgetc(fp);
    printf("your string is :\n");
    while (!feof(fp))
    {
        str[i++]=ch;
        ch = fgetc(fp);
    }
    str[i] = '\0';
    printf(" %s",str);
    fclose(fp);
    for(i = 0; str[i]!=0;i++)
    {
        if(str[i] == 'a' ||  str[i] == 'A' ||  str[i] == 'e' ||str[i] == 'E' ||str[i] == 'i' ||str[i] == 'I' ||str[i] == 'o' ||str[i] == 'O' ||str[i] == 'u' ||  str[i] == 'U')
        {
            vovels++;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='Z'&& str[i]<='Z'))
        {
            consonant++;
        }
        else if ((str[i]>='0'&& str[i]<='9'))
        {
            digits++;
        }
        else if ((str[i]>=' '))
        {
            space++;
        }
        else
        {
            symbols++;
        }
    }
    printf("\n\n \tVovels : %d \n \tConstonts : %d \n \tDigits : %d \n \tSpecial Symboles : %d \n \tSpace  : %d \n\n",vovels,consonant,digits,symbols,space);

}