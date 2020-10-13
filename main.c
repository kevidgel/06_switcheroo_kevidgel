#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int arr[10];
  int i;

  // populate array with random values
  for (i = 0; i < 9; i++)
  {
    arr[i] = rand();
  }

  // set last to 0
  arr[9] = 0;

  // print out each in array
  for (i = 0; i < 10; i++)
  {
    printf("%d\n", *(arr + i));
  }

  printf("\n");

  // reverse in arr2
  int arr2[10];
  for (i = 0; i < 10; i++)
  {
     *(arr2 + 9 - i) = *(arr + i);
  }

  // print out each in array
  for (i = 0; i < 10; i++)
  {
    printf("%d\n", *(arr2 + i));
  }
}
