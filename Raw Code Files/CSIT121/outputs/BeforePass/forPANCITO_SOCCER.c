#include<stdio.h>
#include<conio.h>

void headerCode()
{	printf("Christian Harry R. Pancito\tCSIT121 G6 Assignment\n");
	printf("===================<SOCCER MATCH>====================\n\n");
}
int main ()
{	int teamOne=0, teamTwo=0, inp, i=0, boolean=0;
	headerCode();
	printf("\t\tSoccer Tally Scores!\n\t\tTeam 1 <%d> Goals\n\t\tTeam 2 <%d> Goals\n\nInput <1/2>: ",teamOne,teamTwo);
	for(i=1;boolean!=1;++i)
	{	scanf("%d",&inp);
		if(inp==1)
		{	teamOne++;
		}
		else if (inp==2)
		{	teamTwo++;
		}
		else if (inp==0)
		{	boolean=1;
		}
		else
		{	system("cls");
			printf("Invalid Input! Try again! Use <1/2/0>\nPress any key to continue...");
			getch();
		}
		system("cls");
		headerCode();
		printf("\t\tSoccer Tally Scores!\n\t\tTeam 1 <%d> Goals\n\t\tTeam 2 <%d> Goals\n\nInput <1/2>: ",teamOne,teamTwo);
	}
	printf("\n===================<  RESULTS  >=====================\n\n");
	if (teamOne>teamTwo)
	{	printf("\t\tTeam One Won!\n\n");
		printf("\tMatch Statistics:\n\tTeam One Goals: %d\n\tTeam Two Goals: %d",teamOne,teamTwo);
	}
	else if (teamTwo>teamOne)
	{	printf("\t\tTeam Two Won!\n\n");
		printf("\tMatch Results:\n\tTeam One Goals: %d\n\tTeam Two Goals: %d",teamOne,teamTwo);
	}
	else if (teamOne==0||teamTwo==0)
	{	printf("\t\tNo Team Won!\n\n");
		printf("\tMatch Results:\n\tTeam One Goals: %d\n\tTeam Two Goals: %d",teamOne,teamTwo);
	}
	else
	{	printf("\t\tBoth Teams Tied!\n\n");
		printf("\tMatch Statistics:\n\tTeam One Goals: %d\n\tTeam Two Goals: %d",teamOne,teamTwo);
	}
}
