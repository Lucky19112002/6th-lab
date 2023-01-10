#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
char input[10];
int i, erroe;

void T();
void Tprime();
void E();
void Eprime();
void F();

void main()
{
    printf("Enter the algo expression :");
    scanf("%s",input);
    
    
    E();

    if (strlen(input) == i && erroe == 0)
    {
        printf("\n---------------Accpted---------------");
    }
    else
    {
        printf("\n---------------Rejected---------------");
    }
    getch();
}
void E(){
    T();
    Eprime();
}
void Eprime()
{
    if(input[i]=='+')
    {
        i++;
        T();
        Eprime();
    }
}
void T()
{
    F();
    Tprime();
}
void Tprime()
{
    if(input[i]=='*')
    {
        i++;
        F();
        Tprime();
    }
}
void F()
{
    if (input[i]=='a')
    {
        i++;
    }
    else if (input[i] == '(')
    {
        i++;
        E();
        if (input[i]== ')')
        {
            i++;
        }else
        {
            erroe = 1;
        }
    }
    else{
        erroe = 1;
    }
}




