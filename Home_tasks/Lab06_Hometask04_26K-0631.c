#include <stdio.h>
int main()
{
    int totalCont,weight,type,track,i;
    
    printf("Enter Total Number Of Containers: ");
    scanf("%d",&totalCont);
    
    for(i=1;i<=totalCont;i++)
    {
        printf("\nContainer %d\n",i);
        
        printf("Enter Container Weight: ");
        scanf("%d",&weight);
        
        printf("Enter Cargo Type (1-3): ");
        scanf("%d",&type);
        
        switch(type)
        {
            case 1:
                if(weight<=20000)
                {
                    printf("Container Can Be Loaded\n");
                }
                else
                {
                    printf("Container Cannot Be Loaded\n");
                }
                break;
                
            case 2:
                if(weight<=15000 && i%2!=0)
                {
                    printf("Container Can Be Loaded\n");
                }
                else
                {
                    printf("Container Cannot Be Loaded\n");
                }
                break;
                
            case 3:
                if(weight<=18000)
                {
                    printf("Container Can Be Loaded\n");
                }
                else
                {
                    printf("Container Cannot Be Loaded\n");
                }
                break;
                
            default:
                printf("Invalid Cargo Type\n");
        }
        
        track=(weight%97)%100;
        
        printf("Tracking Code: %02d\n",track);
    }
    
    return 0;
}



