#include <stdio.h>
void main()
{
    int day,year,month;
    do{
        printf("ENTER a year: ");
        scanf("%d",&year);
    }while(year<1900 || year>9999);
    do{
        printf("ENTER a Month: ");
        scanf("%d",&month);
    }while(month<0 || month>12);
    switch(month){
        case 1: case 3: case 5: case 7: case 9: case 11:
            do{
        printf("ENTER a DAY: ");
        scanf("%d",&day);
    }while(day<0 || day>31);
    break;
        case 4: case 6: case 8: case 10: case 12:
            do{
        printf("ENTER a DAY: ");
        scanf("%d",&day);
    }while(day<0 || day>30);
    break;
        case 2:
        if(year%4==0)
        {
                do{
        printf("ENTER a DAY: ");
        scanf("%d",&day);
    }while(day<0 || day>29);
        }
        else{
                do{
        printf("ENTER a DAY: ");
        scanf("%d",&day);
    }while(day<0 || day>28);
        }
        break;
        
    }
    printf("Todays is %d of the month %d and year is %d\n",day,month,year);
    }