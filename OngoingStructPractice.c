#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Task
{
        char Name[30];
        int DateDue;
        int MonthDue;
        int YearDue;

};
int main(void)
{
	char name[30];
	int a, b, c, choice;

	printf("Welcome to the task creator app. How can I serve you?\n");

	while (1)
	{
		printf("1. I want to create a simple task manager\n");
		printf("2. I'm am done creating\n");
		printf("3. This is a mistake- Exit\n");
		scanf("%d", &choice);

		int ch;
		while ((ch = getchar()) != '\n' && ch != EOF);

		switch (choice)
		{
			case 1:
				printf("Please enter task name\n");
				fgets(name, sizeof(name), stdin);
				name[strcspn(name, "\n")] = 0;
				printf("Please enter the date due\n");
				scanf("%d", &a);
				printf("Please enter the month due\n");
				scanf("%d", &b);
				printf("Please enter the year due\n");
				scanf("%d", &c);


				struct Task task1;
				strcpy(task1.Name, name);
				task1.DateDue = a;
				task1.MonthDue = b;
				task1.YearDue = c;
				
				printf("Task name: %s\n", task1.Name);
				printf("Due Date: %d\n", task1.DateDue);
				printf("Month Due: %d\n", task1.MonthDue);
				printf("Year Due: %d\n", task1.YearDue);

				break;

			case 2:
				printf("Great, Have a nice day\n");
				return 0;

			case 3:
				printf("Thank you for your concern, bye 👋🏾\n");
				return 0;
		}
	}

	return 0;

}
