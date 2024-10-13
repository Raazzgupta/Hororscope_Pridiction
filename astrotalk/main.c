#include <stdio.h>
#include<time.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>
#include <direct.h>
#include<windows.h>
int menu();
int year, month, day;
void main()
{
start:
    system("cls");
    printf("Welcome to birth and HoroScope pridiction\n ");
	printf("Provide Some detail to get pricison pridiction\n");
    printf("Enter Year (1970-2005):\n");
    scanf("%d", &year);
    if (year < 1970 || year > 2005)
        goto start;

skip:
    printf("Enter Your Month No. (1-12):\n");
    scanf("%d", &month);

    if (month == 1)
    {
    back:
        printf("Enter Day (1-31):\n");
        scanf("%d", &day);
        if (day <= 19)
        {
            system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of JANUARY.\n");
		printf("Your BirthStone is GARNET.\n");
		printf("You are a CAPRICORN.");
		getch();
		goto start;
        }
        else if (day > 19 && day <= 31)
        {
            system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of JANUARY.\n");
		printf("Your BirthStone is GARNET.\n");
		printf("You are an AQUARIUS.");
		getch();
		goto start;
        }
        else
        {
            printf("Enter Correct Day!!!!!!\n");
            goto back;
        }
    }

    else if (month == 2)
    {
    back1:
    printf("Enter Day (1-29):");
	scanf("%d",&day);
	if (day<=18)
		{
           system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of FEBRUARY.\n");
		printf("Your BirthStone is AMETHYST.\n");
		printf("You are an AQUARIUS.\n");
		getch();
		goto start;
		}
	else if (day>18&&day<=29)
		{
          system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of FEBRUARY.\n");
		printf("Your BirthStone is AMETHYST.\n");
		printf("You are a PISCES.");
		getch();
		goto start;
		}
	else
		{
            printf("Enter Correct Day!!!!!!\n");
            goto back1;}
    }

    else if (month == 3)
    {
    back2:
    printf("Enter Day (1-31):\n");
	scanf("%d",&day);
	if (day<=20)
		{
            system("cls");
            
            printf("%d-%d-%d", month, day, year);
            menu();
            printf("You are born on the month of MARCH.\n");
            printf("Your BirthStone is AQUAMARINE or BLOODSTONE.\n");
            printf("You are a PISCES.");
			getch();
			goto start;
		}
	else if (day>20&&day<=31)
		{
             system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of MARCH.\n");
		printf("Your BirthStone is AQUAMARINE or BLOODSTONE.\n");
		printf("You are an ARIES.");
		getch();
		goto start;
		}
	else
		{
            printf("Enter Correct Day!!!!!!\n");
            goto back2;}
    }

    else if (month == 4)
    {
    back3:
    printf("Enter Day (1-30):\n");
	scanf("%d",&day);
	if (day<=19)
		{
            system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of APRIL.\n");
		printf("Your BirthStone is DIAMOND.\n");
		printf("You are an ARIES.");
		getch();
		goto start;
		}
	else if (day>19&&day<=30)
		{
            system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of APRIL.\n");
		printf("Your BirthStone is DIAMOND.\n");
		printf("You are a TAURUS.");
		getch();

		goto start;
		}
	else
		{
            printf("Enter Correct Day!!!!!!");
            goto back3;}
    }

    else if (month == 5)
    {
    back4:
    printf("Enter Day (1-31):\n");
	scanf("%d",&day);
	if (day<=20)
		{
          system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of MAY.\n");
		printf("Your BirthStone is EMERALD.\n");
		printf("You are a TAURUS.\n");
		getch();
		goto start;
		}
	else if (day>20&&day<=31)
		{ 
			system("cls");     
               printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of MAY.\n");
		printf("Your BirthStone is EMERALD.\n");
		printf("You are a GEMINI.");
		getch();
		goto start;
		}
	else
		{
            printf("Enter Correct Day!!!!!!\n");
            goto back4;}
    }

    else if (month == 6)
    {
    back5:
    printf("Enter Day (1-30):\n");
	scanf("%d",&day);
	if (day<=20)
		{
             system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of JUNE.\n");
		printf("Your BirthStone is PEARL, ALEXANDRITE or MOONSTONE.\n");
		printf("You are a GEMINI.\n");
		getch();
		goto start;
		}
	else if (day>20&&day<=30)
		{
             system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of JUNE.\n");
		printf("Your BirthStone is PEARL, ALEXANDRITE or MOONSTONE.\n");
		printf("You are a CANCER.\n");
		getch();
		goto start;
		}
	else
		{
            printf("Enter Correct Day!!!!!!\n");
            goto back5;}
    }

    else if (month == 7)
    {
    back6:
    printf("Enter Day (1-31):\n");
	scanf("%d",&day);
	if (day<=22)
		{
          system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of JULY.\n");
		printf("Your BirthStone is RUBY.\n");
		printf("You are a CANCER.\n");
		getch();
		goto start;
		}
	else if (day>22&&day<=30)
		{
          system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of JULY.\n");
		printf("Your BirthStone is RUBY\n.");
		printf("You are a LEO.\n");
		getch();
		goto start;
		}
	else
		{
            printf("Enter Correct Day!!!!!!\n");
            goto back6;}
    }

    else if (month == 8)
    {
    back7:
    printf("Enter Day (1-31):\n");
	scanf("%d",&day);
	if (day<=22)
		{
            system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of AUGUST.\n");
		printf("Your BirthStone is PERIDOT or SARDONYX.\n");
		printf("You are a LEO.\n");
		getch();
		goto start;
		}
	else if (day>22&&day<=31)
		{
            system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of AUGUST.\n");
		printf("Your BirthStone is PERIDOT or SARDONYX.\n");
		printf("You are a VIRGO.\n");
		getch();
		goto start;
		}
	else
		{
            printf("Enter Correct Day!!!!!!\n");
            goto back7;}
    }

    else if (month == 9)
    {
    back8:
    printf("Enter Day (1-30):\n");
	scanf("%d",&day);
	if (day<=22)
		{
            system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of SEPTEMBER.\n");
		printf("Your BirthStone is SAPPHIRE.\n");
		printf("You are a VIRGO.\n");
		getch();
		goto start;
		}
	else if (day>22&&day<=30)
		{
             system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of SEPTEMBER.\n");
		printf("Your BirthStone is SAPPHIRE.\n");
		printf("You are a LIBRA.\n");
		getch();
		goto start;
		}
	else
		{
            printf("Enter Correct Day!!!!!!\n");
            goto back8;}
    }

    else if (month == 10)    {
    back9:
    printf("Enter Day (1-31):\n");
	scanf("%d",&day);
	if (day<=22)
		{
            system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of OCTOBER.\n");
		printf("Your BirthStone is OPAL or TOURMALINE.\n");
		printf("You are a LIBRA.\n");
		getch();
		goto start;
		}
	else if (day>22&&day<=31)
		{
          system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of OCTOBER.\n");
		printf("Your BirthStone is OPAL or TOURMALINE.\n");
		printf("You are a SCORPIO.\n");
		getch();
		goto start;
		}
	else
		{
            printf("Enter Correct Day!!!!!!\n");
            goto back9;
            }
    }

    else if (month == 11)
    {
    back10:
    printf("Enter Day (1-30):\n");
	scanf("%d",&day);
	if (day<=21)
		{
             system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of NOVEMBER.\n");
		printf("Your BirthStone is TOPAZ.\n");
		printf("You are a SCORPIO.\n");
		getch();
		goto start;
		}
	else if (day>21&&day<=30)
		{
            system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of NOVEMBER.\n");
		printf("Your BirthStone is TOPAZ.\n");
		printf("You are a SAGITARIUS.\n");
		getch();
		goto start;
		}
	else
		{
            printf("Enter Correct Day!!!!!!\n");
            goto back10;}
    }

    else if (month == 12)
    {
    back11:
    printf("Enter Day (1-31):\n");
	scanf("%d",&day);
	if (day<=21)
		{
             system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of DECEMBER.\n");
		printf("Your BirthStone is TURQUOISE OR ZIRCON.\n");
		printf("You are a SAGITARIUS.\n");
		getch();
		goto start;
		}
	else if (day>21&&day<=31)
		{
            system("cls");
        printf("%d-%d-%d",month,day,year);
		menu();
		printf("You are born on the month of DECEMBER.\n");
		printf("Your BirthStone is TURQUOISE OR ZIRCON.\n");
		printf("You are a CAPRICORN.\n");
		
		goto start;
		}
	else
		{
            printf("Enter Correct Day!!!!!!\n");
            goto back11;}
    }
    else
    {
        printf("Enter Correct No.!!!!!!\n");
        Sleep(99999999);
        Sleep(99999999);
        Sleep(99999999);
        Sleep(99999999);
        goto skip;
    }
    getch();
}


int menu()
{
    if (year == 1992 || year == 1980 || year == 2004)
    printf("You are born on the Year of the MONKEY.\n");
else if (year==1993||year==1981||year==2005)
	printf("You are born on the Year of the ROOSTER.\n");
else if (year==1994||year==1982||year==1970)
	printf("You are born on the Year of the DOG.\n");
else if (year==1995||year==1971||year==1983)
	printf("You are born on the Year of the BOAR.\n");
else if (year==1996||year==1984||year==1972)
	printf("You are born on the Year of the RAT.\n");
else if (year==1997||year==1985||year==1973)
	printf("You are born on the Year of the OX.\n");
else if (year==1998||year==1986||year==1974)
	printf("You are born on the Year of the TIGER.\n");
else if (year==1975||year==1999||year==1987)
	printf("You are born on the Year of the RABBIT.\n");
else if (year==1976||year==2000||year==1988)
	printf("You are born on the Year of the DRAGON.\n");
else if (year==1977||year==2001||year==1989)
	printf("You are born on the Year of the SNAKE.\n");
else if (year==2002||year==1978||year==1990)
	printf("You are born on the Year of the HORSE.\n");
else if (year==2003||year==1979||year==1991)
	printf("You are born on the Year of the RAM.\n");

return 0;
}
