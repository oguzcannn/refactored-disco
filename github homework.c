// 3 kenar uzunluðu al eþkenar ikizkenar eþitkenar
#include <stdio.h>
#include <stdlib.h>
int main ()
{
int edge1;
int edge2;
int edge3;

printf(" edge 1=");
scanf("%d", &edge1);
printf("\n edge 2=");
scanf("%d", &edge2);
printf("\n edge 3=");
scanf("%d", &edge3);

if (edge1 == edge2 && edge2 == edge3)
    printf("\nequilateral");
else if (edge1 == edge2 || edge1 == edge3 || edge2 == edge3 )
         printf("\nisosceles");
else
    printf("\nscalene");
return 0;
}
