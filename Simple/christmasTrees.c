#include <stdio.h>


void drawTree(int h){
    if ( h > 40 )
    {
	printf("U went too big");
        return;
    }
    else
    {
    for(int i=1; i<=h-1; i++)
        {
    if ( i%4 == 0){
        for(int k=1; k<=h-i-2;k++)
            {
         printf(" ");
            }
    }
    else
        {
          for(int k=1; k<=h-i-1;k++)
            {
         printf(" ");
            }
        }
if ( i%4 == 0){

        printf("@");

        for(int j=1; j<=2*i-1; j++)
            {
              printf("*");
            }
            printf("@");
                }
            else
                {
              for(int j=1; j<=2*i-1; j++)
            {
              printf("*");
            }

            }
        printf("\n");
        }

    if( h <= 10 )
        {

    for(int trzon=1; trzon<=h-2; trzon++)
            {
        printf(" ");
            }
    printf("#");
        }
    else
        {

      for(int trzon=1; trzon<=h-3; trzon++)
            {
        printf(" ");
            }
    printf("###");
        }
    }
printf("\n\n");
}

int main()
{
	drawTree(6);
	drawTree(15);
	drawTree(30);
	return 0;
}