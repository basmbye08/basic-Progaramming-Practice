#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5];
    int personCounter = 1;
    for(int i = 0; i < 5; i++)
    {
        printf("person[%d]: Enter you age please: ", personCounter);

        scanf("%d", &array[i]);
        personCounter++;
    }

    for(int i = 0; i < 5; i++)
    {
        if(i == 4){printf("%d\n", array[i] );}
        else{printf("%d, ", array[i]);}

    }

printf("\n");
int *ptr = &array[0];
for (int i = 0; i < 5; i++)
    {
        printf("%p\n", &array[i]);

}

for(int i = 0; i < 5; i++)
{
    printf("%d\n", *(ptr + i));
}





    return 0;
}
