/*-----CALCULATOR------
PROGRAMMER = Mital vays
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int choise,choise1,m1,m2;
float ans,number=0,number1=0,n1,n2;
char sign;
clrscr();
printf("CHOOSE ONE OPTION : \n");
printf("1 : SIMPLE CALCULATION\n");
printf("2 : MATHMATICAL CALCULATION\n");
printf("enter your choise : ");
scanf("%d",&choise);
switch(choise)
{
	case 1:
		printf("enter a sign to perform operation : ");
		scanf(" %c",&sign);
		switch(sign)
		{
			case '+':
				printf("enter a number 2 : ");
				scanf("%f",&n1);
				printf("enter a number 2 : ");
				scanf("%f",&n2);
				ans = n1+n2;
				printf("\n%2f + %2f = %2f",n1,n2,ans);
				break;

			case '-':
				printf("enter a number 2 : ");
				scanf("%f",&n1);
				printf("enter a number 2 : ");
				scanf("%f",&n2);
				ans = n1-n2;
				printf("\n%2f -%2f = %2f",n1,n2,ans);
				break;

			case '*':
				printf("enter a number 2 : ");
				scanf("%f",&n1);
				printf("enter a number 2 : ");
				scanf("%f",&n2);
				ans = n1*n2;
				printf("\n%2f *%2f = %2f",n1,n2,ans);
				break;

			case '/':
				printf("enter a number 2 : ");
				scanf("%d",&m1);
				printf("enter a number 2 : ");
				scanf("%d",&m2);
				ans = m1/m2;
				printf("\n%2d / %2d = %2f",m1,m2,ans);
				break;

			case '%':
				printf("enter a number 2 : ");
				scanf("%d",&m1);
				printf("enter a number 2 : ");
				scanf("%d",&m2);
				ans = m1%m2;
				printf("\n%2d %%%2d = %2f",m1,m2,ans);
				break;

			default:
				printf("enter valid sign");
				break;
		}
		break;
	case 2:
		printf("CHOOSE ONE OPTION: \n");
		printf("1 : COS\n");
		printf("2 : SIN\n");
		printf("3 : TAN\n");
		printf("4 : EXP (E TO THE X POWER)\n");
		printf("5 : LOG\n");
		printf("6 : LOG10\n");
		printf("7 : POWER (X TO POWER Y)\n");
		printf("8 : SQUARE ROOT");
		printf("\nenter your choise : ");
		scanf("%d",&choise1);
		switch(choise1)
		{
			case 1:
			printf("enter a number ");
			scanf("%f",&number);
			printf("%f = %f",number,cos(number));
			break;

			case 2:
			printf("enter a number ");
			scanf("%f",&number);
			printf("%f",sin(number));
			break;

			case 3:
			printf("enter a number ");
			scanf("%f",&number);
			printf("%f",tan(number));
			break;

			case 4:
			printf("enter a number ");
			scanf("%f",&number);
			printf("%f",exp(number));
			break;

			case 5:
			printf("enter a number ");
			scanf("%f",&number);
			printf("%f",log(number));
			break;

			case 6:
			printf("enter a number ");
			scanf("%f",&number);
			printf("%f",log10(number));
			break;

			case 7:
			printf("enter a number :");
			scanf("%f",&number);
			printf("enter power value :");
			scanf("%f",&number1);
			printf("%f",pow(number,number1));
			break;

			case 8:
			printf("enter a number ");
			scanf("%f",&number);
			printf("%f",sqrt(number));
			break;

			default:
			printf("enter valid number");
			break;
		}
		break;
	default:
	printf("enter valid number ");
	break;
}
getch();
}
