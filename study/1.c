#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define ARRAY_LENGTH 10
#define NUMBERS_AMOUNY 1000000;

int oddDoubler (int* arr, int len){
    int i;
    int changed = 0;
    for (i = 0; i < len; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr[i] *= 2;
            changed = 1;
        }
    }
    return changed;
}

  printf("Initialize an array?\n");
 srand(time(NULL));
 int ARRAY[9];
 int i;
 if (oddDoubler(ARRAY, ARRAY_LENGTH))
 {
     for (i=0; i<ARRAY_LENGTH; i++)
         printf("%d ", *(ARRAY + i));
     printf("\n");
 }
 else {
   printf("0\n");
 }
 return 0;
}
