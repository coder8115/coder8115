#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 0b");
    int floor,i,room[100],occu[100],roomtotal,occutotal;
    roomtotal=0;
    occutotal=0;

    printf("Enter the number of floors : ");
    scanf("%d",&floor);

    printf("\n number of rooms in each floor : \n");
    printf("_______________________________\n\n");
        for (i=0;i<floor;i++){

            printf("Enter the number of rooms in floor %d\n\n",i);
            scanf("%d",&room[i]);
            roomtotal=roomtotal+room[i];

    }
    printf("\n number of occupied room in each floor :\n ");
    printf("______________________________________________\n\n");

        for (i=0;i<floor;i++){
            printf("Enter the number of occupied rooms in floor %d\n\n",i);
            scanf("%d",&occu[i]);
            occutotal=occutotal+occu[i];

    }

        for (i=0;i<floor;i++){
                if(room[i]>=occu[i]){

            printf("\nNumber of empty rooms in floor %d is : %d\n",i,room[i]-occu[i]);
                }else{

                    printf("Wrong data\n");
                    break;

                }
        }


    if (roomtotal<occutotal){

        printf("INVALID");
    }
    else{

    printf("\nthe total numbers of room : % d\n",roomtotal);
    printf("\nthe total numbers of occupied room : %d\n",occutotal);
    printf("\nThe number of remaining rooms : %d \n",roomtotal-occutotal);
    }


    return 0;
}
