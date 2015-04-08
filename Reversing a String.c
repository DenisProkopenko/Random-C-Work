#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    
    char name[255];
    int count =0;
    

    printf("Enter your full name: \n");
    scanf("%255[^\n]s", name);

    printf("\nName spelled forward:\n%s\n\n",name);
    
    
    
    count= strlen(name) - 1;
    
    printf("Your name spelled backwards is:\n");
    while (count>=0)
    {
          putchar(name[count]);
          count--;
    }
    printf("\n\n");
    
    
    
system("PAUSE");
return 0;
}
/*
Enter your full name:
Denis Prokopenko

Name spelled forward:
Denis Prokopenko

Your name spelled backwards is:
oknepokorP sineD

Press any key to continue . . .
*/
