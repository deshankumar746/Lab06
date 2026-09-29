#include <stdio.h>

int main()
{
    int age,movCategory,price,month_day,extra_discount;
    float discount,final_price;
    do
    {
        printf("Enter Your Age: ");
        scanf("%d",&age);

        if(age==0)
        {
            return 0;
        }

        if(age<0)
        {
            printf("Invalid Age\n");
        }
        else
        {
            printf("Enter The Day(1-31): ");
            scanf("%d",&month_day);

            if(month_day<1||month_day>31)
            {
                printf("Invalid Month Day\n");
            }
            else
            {
                printf("Enter The Movie Category:\n");
                printf("1-Regular\n");
                printf("2-3D\n");
                printf("3-Premium (1st-day show)\n");
                scanf("%d",&movCategory);

                switch(movCategory)
                {
                    case 1:
                        price=500;
                        break;
                    case 2:
                        price=800;
                        break;
                    case 3:
                        price=1200;
                        break;
                    default:
                        printf("Invalid Movie Category\n");
                        return 0;
                }

                if(price!=0)
                {
                    discount=0;
                    extra_discount=0;

                    if(age<13)
                    {
                        discount=0.3*price;
                    }
                    else if(age>=60)
                    {
                        discount=0.2*price;
                    }

                    final_price=price-discount;

                    if(month_day%5==0)
                    {
                        extra_discount=50;
                    }

                    final_price=final_price-extra_discount;

                    if(final_price<100)
                    {
                        final_price=100;
                    }

                    printf("\nInitial Price: %d\n",price);
                    printf("Discount: %.2f\n",discount);
                    printf("Bonus Day Discount: %d\n",extra_discount);
                    printf("Final Price: %.2f\n",final_price);
                }
            }
        }
    }while(age!=0);

    return 0;
}

