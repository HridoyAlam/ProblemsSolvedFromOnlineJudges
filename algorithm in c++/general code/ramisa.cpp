#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <iostream>
#include<stdlib.h>


int i;// i is requred in most of the function. That's i made it global variable
void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="RAMISA";
    char pass[10]="Thunder";
    do
{

    printf("\n  ++++++++++++++++++++++++++++++ PLEASE LOGIN TO ADMIN ACCOUNT  ++++++++++++++++++++++++++++++  ");
    printf(" \n\n                  ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n\n                  ENTER PASSWORD:-");
	while(i<10)   // loop for getting password 10 character length
	{
	    pword[i]= getch();
	    c=pword[i];
	    if(c==13)
            break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';  //'\0' indicate the termination of a character string

	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,"RAMISA")==0 &&  //strcmp function for comparing two strings
 strcmp(pword,"Thunder")==0) //strcmp function for comparing two strings

	{
	printf("  \n\n\n       WELCOME TO OFFICE RECORD SYSTEM !!!! YOUR LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();  //holds the screen
		break;
	}
	else
	{
		printf("\n\n\n        SORRY !!!! YOUR LOGIN IS UNSUCESSFUL");
		a++;
        printf("\n\n\n\n\n\t\t\t Please enter any key to try again........ ");
        getch();
		system("cls");

		//getch();//holds the screen

	}
}
	while(a<=2); // counting how many times you are giving invalid output

	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for three times!!!");

		getch();

		}
		system("cls");


}

// File is used to declare file pointer
FILE*a1;
FILE*b2;
FILE*c3;
FILE*d4;
FILE*e5;
FILE*f6;
FILE*g7;
FILE*h8;

//printing the id's which have stored in the file
void id()
{
     a1=fopen("id.txt","r"); //fopen for open file read mode

            char id;
            id=fgetc(a1);
            while(id!=EOF)
            {
                printf("%c",id);
                 id=fgetc(a1);

            }
}

//printing the name's which have stored in the file
void name()
{
     b2=fopen("name.txt","r");
            char name=getc(b2);
            for(i=0;name!=EOF;i++)
            {
                printf("%c",name);
                 name=getc(b2);

            }
}

//printing the gender's which have stored in the file
void gen()
{
   c3=fopen("gen.txt","r");
            char gen=getc(c3);
            for(i=0;gen!=EOF;i++)
            {
                printf("%c",gen);
                 gen=getc(c3);

            }
}

//printing the age's which have stored in the file
void age()
{
    d4=fopen("age.txt","r");
            char age=getc(d4);
            for(i=0;age!=EOF;i++)
            {
                printf("%c",age);
                 age=getc(d4);

            }
}

//printing the salary's which have stored in the file
void salary()
{
    e5=fopen("salary.txt","r");
            char salary=getc(e5);
            for(i=0;salary!=EOF;i++)
            {
                printf("%c",salary);
                 salary=getc(e5);

            }
}

//printing the department's which have stored in the file
void dep()
{
    f6=fopen("dep.txt","r");
            char dep=getc(f6);
            for(i=0;dep!=EOF;i++)
            {
                printf("%c",dep);
                 dep=getc(f6);

            }
}

//printing the phone's which have stored in the file
void ph()
{
     g7=fopen("ph.txt","r");
            char ph=getc(g7);
            for(i=0;ph!=EOF;i++)
            {
                printf("%c",ph);
                 ph=getc(g7);

            }
}

//printing the joining date's which have stored in the file
void jd()
{
     h8=fopen("jd.txt","r");
            char jd=getc(h8);
            for(i=0;jd!=EOF;i++)
            {
                printf("%c",jd);
                 jd=getc(h8);

            }
}

int main()
{
    login();
    int i,choice;
     do
     {
         printf("\n1.Show ID\n2.Show Name\n3.Show Gender\n4.Show Age\n5.Show Salary\n6.Show Department\n7.Show Phone Number\n8.Show Joining Date\n9.Exit ");
         printf("\nEnter choice :\t");
         scanf("%d",&choice);
         fflush(stdin);


// switch case for choosing function
         switch(choice)
         {
         case 1:
            id();
            break;
             case 2:
              name();
                break;
              case 3:
           gen();
            break;
            case 4:
            age();
            break;
            case 5:
           salary();
            break;
             case 6:
            dep();
            break;
             case 7:
           ph();
            break;
            case 8:
            jd();
            break;
         }

     }while(choice!=9);
     printf("\n\n\n\t\t\t The Program has finished....Good Bye....Have a nice day!!");
}
