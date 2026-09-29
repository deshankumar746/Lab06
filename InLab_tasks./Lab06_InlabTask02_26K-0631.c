#include <stdio.h>
int main()
{
    int value,option;
    do
    {
        printf("Enter Appliance Value(-1 to stop): ");
        scanf("%d",&value);
        
        if(value==-1)
        {
        break;
        }

        if(value<0||value>15)
        {
            printf("Invalid Value\n");
        }
        else
        {
            printf("1-Switch Water Heater ON\n");
            printf("2-Switch Air Conditioner OFF\n");
            printf("3-Toggle Main Lights\n");
            printf("4-Check Security Camera\n");
            scanf("%d",&option);

            switch(option)
            {
                case 1:
                    value=value|2;
                    break;
                case 2:
                    value=value&~4;
                    break;
                case 3:
                    value=value^1;
                    break;
                case 4:
                    if(value&8)
                    {
                        printf("Security Camera is ON\n");
                    }
                    else
                    {
                        printf("Security Camera is OFF\n");
                    }
                    break;

                default:
                    printf("Invalid Option\n");
            }

            printf("New Combined Value:%d\n",value);

            if((value&4)&&(value&2))
            {
                printf("There is Overload because both b/c both air conditioner and water heater are on");
            }
            else
            {
                printf("No Overload Risk\n");
            }
        }

    }while(value!=-1);
    return 0;
}

