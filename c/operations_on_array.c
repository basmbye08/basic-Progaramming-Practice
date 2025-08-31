#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int array[10];
int n = 5;
// getting array values through user input
for (int i = 0; i < n; i++)
{
     printf("Enter a value of the array please: ");
     scanf("%d", &array[i]);
}
//Traverse through array and perform print operation
for (int i = 0; i < n; i++)
{
    printf("%d\n", array[i]);
}

printf("Next insert value 5 to the above array\n");


//insert value 5 at index 3(array[3])

int value = 5;
int pos = 3;
int j = n;

while(j >= pos)
{
    array[j + 1] = array[j];
    j--;
}

array[pos] = value;
n = n + 1;
for (int i = 0; i < n; i++)
{
    printf("%d ", array[i]);
}
printf("\n");

printf("Next delete the value at index 2 in the above array\n");


// Delete element at index 2(array[2])

pos = 2;

for(int i = pos; i < n; i++)
{
    array[i] = array[i + 1];
}
n = n - 1;

for (int i = 0; i < n; i++ )
{
    printf("%d ", array[i]);
}

printf("\n");


// Seach if element 3 is present in the array using linear Search

int target = 3;
int i = 0;
while(i < n && array[i] != target)
{
    i++;
}

if (i > n)
{
    printf("Search was unsuccesful");
}

else if(array[i] == target)
{
    printf("Searching was succesful");
}



return 0;
}
