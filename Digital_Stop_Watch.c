#include<stdio.h>
#include<windows.h>
#define CYCLE 59
int main(){

int hour, minute, second;

    printf("Enter Hour:\n");
    scanf("%d",&hour);
     printf("Enter Minute:\n");
     scanf("%d",&minute);
     printf("Enter Second:\n");
     scanf("%d",&second);

    printf("%.2d:%.2d:%.2d\n\n\n",hour,minute,second);
    printf("\n\t########## Digital Stop Watch #######\n\n");

    int h=0,m=0,s=0;

    while (1){


        printf("\r\t\t     %.2d:%.2d:%.2d",h,m,s);

        if(h==hour && m==minute && s==second){
            break;


        }


          s++;
          Sleep(1000);
          if (s==CYCLE){
            m++;
            s=0;
            if (m==CYCLE){
                h++;
                m=0;

                if(h==12){
                   h=0;
                }
            }
          }


    }

 printf("\n\n\t######### MADE BY TAKBIR ##########\n\n");

 return 0;
}
