#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
void keyw(char *p);
int i=0,id=0,kw=0,num=0,op=0,sp =0,ar=0,count=1,new_lune=0;
char keys[32][10]={"auto","break","case","char","const","continue","default","do","dobule","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","struct","switch","typedef","union","unsigned","void","volatiel","while"};
void main()
{
    char ch,str[25],seps[20]="\t\n,;(){}[]#\"<>",oper[]="!%^&*-+=~|.<>/?";
    int j;
    char fname[50];
    FILE *f1;
    f1 = fopen("Laxcode.txt","r");
    if (f1 == NULL)
    {
        printf("File not found");
        exit(0);
    }
    while((ch=fgetc(f1))!=EOF)
    {
        for ( j = 0; j <=14; j++)
        {
            if(ch == oper[j])
            {
                printf("%c is an operator\n",ch);
                op++;
                count++;
                str[i]= '\0';
                keyw(str);
            }
        }
        if (ch == '\n')
        {
            new_lune++;
        }
        for ( j = 0; j <= 14; j++)
        {
            if(i == -1)
                break;
            if(ch == seps[j])
            {
                if(ch == '#')
                {
                    while(ch != '>')
                    {
                        printf("%c",ch);
                        ch = fgetc(f1);
                    }
                    printf("%c is a header file\n",ch);
                    i = -1;
                    break;
                }
                if (ch =='"')
                {
                    do
                    {
                        ch = fgetc(f1);
                        printf("%c",ch);
                    } while (ch != '"');
                    i = -1;
                    ar++;
                    count++;
                    break;
                }
                if(ch == ',' || ch == ';' || ch == '(' || ch == ')' || ch == '{' || ch == '}' || ch == '[' || ch == ']')
                {
                    printf("%c is an Serpator",ch);
                    sp++;
                    count++;
                }
                str[i]='\0';
                keyw(str);
            }
        }
        if(i!=-1)
        {
            str[i]=ch;
            i++;
        }
        else
            i = 0;
    }
    printf("\n Keywords : %d \n Identifiers : %d \n Operators : %d \n Numbers : %d \n Seprator : %d \n Arfument : %d",kw,id,op,num,sp,ar);
    printf("\n Total number of token : %d",count);
    printf(" \n Number of lines : %d",new_lune);
    getch();
}
void keyw(char *p)
{
    int k, flag = 0;
    for (k = 0; k <=31; k++)
    {
        if(strcmp(keys[k],p) == 0)
        {
            printf("%s is a keyword \n",p);
            kw++;
            count++;
            flag+1;
            break;
        }
    }
    if(flag == 0)
    {
        if(isdigit(p[0]))
        {
            printf("%s us a number\n",p);
            num ++;
            count++;
        }
        else
        {
            if(p[0]!='\0')
            {
                printf("%s is a identifier\n",p);
                id++;
                count++;

            }
        }
    }
    i = -1;
}
/**
 * @file 
 use this as Laxcode.txt -->
#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Hellow");
    int a,b,c;
    a =10;
    b =20;
    c = a + b;
    printf("Anser is %d",c);
    getch();
}
**/