#include <stdio.h>

int main()
{
	int value,hour;
	int allowed;

	while(1)
	{
		printf("Enter Member Access Number (9999 to stop): ");
		scanf("%d",&value);

		if(value==9999)
		{
			break;
		}

		printf("Enter Current Hour: ");
		scanf("%d",&hour);

		if(hour>=22 || hour<6)
		{
			printf("LATE NIGHT MODE\n");

			if(value & 8)
			{
				allowed=1;
			}
			else
			{
				allowed=0;
			}
		}
		else
		{
			printf("STANDARD MODE\n");

			if((value & 1) || (value & 2) || (value & 4))
			{
				allowed=1;
			}
			else
			{
				allowed=0;
			}
		}

		if(allowed==1)
		{
			printf("Entry Granted\n");
		}
		else
		{
			printf("Entry Denied\n");
		}

		if(value & 4)
		{
			printf("Personal Trainer Access: YES\n");
		}
		else
		{
			printf("Personal Trainer Access: NO\n\n");
		}

		
	}

	printf("Shift Ended\n");
	return 0;
}
