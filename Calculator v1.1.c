#include<stdio.h>

int start()
{
		int s, h;
		float a, b, c, d;
		char op;

		start:
		printf("\n\nEnter 1 for calculator and 2 for help! Or 0 to exit : ");
		scanf("%d", &s);

		if (s == 2)
		{
		help:
		printf("\nAbout:\n\nA PRODUCT OF STAR SOFTWARE DEVELOPMENT COMPANY.");
		printf("\n\nCALSTAR Version: 1.0 [Beta].");
		printf("\nA simple calculating software that can calculate without\nerrors for up to 6 digits after decimal point.");
		printf("\nDeveloped by Professional Zahid Khan.");
		printf("\n\nInstructions:");
		printf("\n\nUse the specified 7 operators to operate between two numbers i.e. (a+b, a + b).");
		printf("\n\n(+) For addition.\n(-) For subtraction.\n(*) For multiplication.\n(/) For division.\n(^) For power.");
		printf("\n(%%) For percentage. 'B' is a number and 'A' is the percentage of 'B' you want\nto calculate. e.g. 20%% (A) of 200 (B) is 40.");
		printf("\n(#) For checking that how many percent 'B' of 'A' is?\ne.g. in '520' How many %% '352' is.");
		printf("\n\nPlease understand this is beta version. The final version is coming soon\nwhich will be supporting more operators.");
		printf("\n\nNow try the calculator!");
		}

		else
			if (s == 1)
		{
			goto cal;
		}
		
		else
			if (s == 0)
		{
			return(0);
		}

		else
		{
			printf("\nSorry wrong entry! ");
			goto start;
		}

		cal:
		printf("\n\nMake an entry (a + b): ");
		scanf("%f %c %f", &a, &op, &b);

		c = 1;
		d = 1;

		do
		{
			d = d * a;
			c = c + 1;
		}

		while
			(c<=b);

		switch (op)
		{

		case '+':
			if (b < 0)
				printf("\nYour answer %f + (%f) = %f",a,b, a+b);

			else
				printf("\nYour answer %f + %f = %f",a,b, a+b);
			break;

		case '-':
			if (b < 0)
				printf("\nYour answer %f - (%f) = %f",a,b, a-b);

			else
				printf("\nYour answer %f - %f = %f",a,b, a-b);
			break;

		case '*':
			if (b < 0)
				printf("\nYour answer %f * (%f) = %f",a,b, a*b);

			else
				printf("\nYour answer %f * %f = %f",a,b, a*b);
			break;

		case '/':
			if (b < 0)
				printf("\nYour answer %f / (%f) = %f",a,b, a/b);

			else
				printf("\nYour answer %f / %f = %f",a,b, a/b);
			break;

		case '%':
			if (b < 0)
				printf("\nYour answer %f %% (%f) = %f",a,b, (a/100)*b);

			else
				printf("\nYour answer %f %% %f = %f",a,b, (a/100)*b);
			break;

		case '^':
			if (b < 0)
				printf("\nYour answer %f ^ (%f) = %f",a,b, d);

			else
				printf("\nYour answer %f ^ %f = %f",a,b, d);
			break;

		case '#':
			if (b < 0)
				printf("\nYour answer %f # (%f) = %f",a,b, b/(a/100));

			else
				printf("\nYour answer %f # %f = %f",a,b, b/(a/100));
			break;

		default:
			printf("\nSorry invalid operator! I recommend seeing the help section first. ");
			goto start;
		}

		goto cal;
}

int main()
{

		printf("\n\nSimple Calculator. Operators (+, -, *, /, ^, %%, #).");
		start();

	return(0);

}
