#include <stdio.h>
int main()
{
    int totalStd,marks1,marks2,marks3,avg,grade,i;
    
    printf("Enter Total Number Of Students: ");
    scanf("%d",&totalStd);
    
    for(i=1;i<=totalStd;i++)
    {
        printf("\nStudent %d\n",i);
        
        printf("Enter Marks Of Subject 1: ");
        scanf("%d",&marks1);
        
        printf("Enter Marks Of Subject 2: ");
        scanf("%d",&marks2);
        
        printf("Enter Marks Of Subject 3: ");
        scanf("%d",&marks3);
        
        avg=(marks1+marks2+marks3)/3;
        
        grade=avg/10;
        
        switch(grade)
        {
            case 10:
            case 9:
                printf("Grade: A\n");
                break;
                
            case 8:
                printf("Grade: B\n");
                break;
                
            case 7:
                printf("Grade: C\n");
                break;
                
            case 6:
                printf("Grade: D\n");
                break;
                
            default:
                printf("Grade: F\n");
        }
        
        printf("Average: %d\n",avg);
        
        if(avg>=60 && marks1>=40 && marks2>=40 && marks3>=40)
        {
            printf("Result: Passed\n");
        }
        else
        {
            printf("Result: Failed\n");
        }
    }
    return 0;
}

