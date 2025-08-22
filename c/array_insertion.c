#include <stdio.h>

int main()

{

int A[10] = {10,  30,  40, 50 , 60 , 70};
//Insert 20 at A[1]
int i;
int pos = 1;
int n = 6;

for(i = n; i > pos; i--){

    A[i] = A[i - 1];

}
A[1] = 20;
n = n + 1;

for (i = 0; i < n; i++){

    printf("%d, ", A[i]);
}

return 0;

}
