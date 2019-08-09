#include <stdio.h>
#define SIZE 100

void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);

int main (void)
{
  int frequency[SIZE] = {0};
  int response[ SIZE ] ={ 6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                          6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                          6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                          5, 6, 7, 7, 5, 7, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
                          7, 4, 4, 7, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7, 7 };

  mean(response);
  median(response);
  mode(frequency, response);

  return 0;
}

void mean(const int answer[])
{
  int j;
  int total = 0;

  printf("%s\n%s\n%s\n", "********", "Mean", "********");

  for (j = 0; j <SIZE; j++)
  {
    total += answer[j];
  }

  printf("The mean is the average value of the data\n"
         "items. The mean is equal to the total of\n"
         "all the data items divided by the number\n"
         "of data items (%d). The mean value for\n"
         "this run is: %d / %d = %.4f\n\n.",
         SIZE, total, SIZE, (double)total / SIZE);
}

void median(int answer[])
{
  printf("\n%s\n%s\n%s\n%s", "********", "Median", "********",
         "The unsorted array of responsees is");

  printArray(answer);

  bubbleSort(answer);

  printf("\n\nThe sorted array is");

  printArray(answer);

  if(SIZE %2 == 0)
  {
    printf("\n\nThe size of the array is even so the median is\n"
           "the average of element %d & element %d of the %d element array.\n"
           "For this run the medianis %d\n", SIZE/2, SIZE/2 + 1, SIZE,
           (answer[SIZE/2] + answer[SIZE/2 + 1]) / 2);
  }
  else
  {
    printf("\n\nThe median is element %d of \n"
           "the sorted %d element array.\n"
           "For this run the median is %d\n\n",
           SIZE / 2, SIZE, answer[SIZE / 2]);
  }
}

void mode(int freq[], const int answer[])
{
  int rating;
  int i, j, h;
  int largest = 0;
  int modeValue[10] = {0};

  printf("\n%s\n%s\n%s\n", "********", "Mode", "********");

  for(rating = 1; rating <= 9; rating++)
  {
    freq[rating] = 0;
  }

  for(j = 0; j < SIZE; j++)
  {
    ++freq[answer[j]];;
  }


  printf("%s%11s%19s\n\n%54s\n%54s\n\n", "Respnse", "Frequecy", "Histogram",
         "1    1    2    2", "5    0    5    0    5");

  for(rating = 1;  rating <= 9; rating++)
  {
    printf("%8d%11d           ", rating, freq[rating]);
 
    if (freq[rating] > largest)
    {
      largest = freq[rating];
      //modeValue = rating;
    }
    
    for (h = 1; h <= freq[rating]; h++)
    {
      printf("*");
    }
  
    printf("\n");
  }
  i = 0;
  for(j = 1; j <= 9; j++)
  {
    if (freq[j] == largest)
    {
      modeValue[i] = j;
      i++;
    }
  }
  printf("\ni = %d\n", i);
  for (j = 0; j <= 9; j++)
  {
    printf("\nmodvalue[%d] = %d\n", j, modeValue[j]);
  }

  /*printf("\nThe mode is the most frequent value. \n"
          "For this run the mode is ");
      
    for(j = 1; j <= 9; j++)
    {
      if (freq[j] ==largest)
      {
        printf("%d ", j);
      }
    }
    printf("which occured %d times.\n", largest);*/

}

void bubbleSort(int a[])
{
  int pass;
  int j;
  int hold;

  for (pass = 1; pass < SIZE; pass++)
  {
    for (j = 0; j < SIZE - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        hold = a[j];
        a[j] = a[j + 1];
        a[j + 1] = hold;
      }
    }
  }
}

void printArray(const int a[])
{
  int j;

  for(j = 0; j < SIZE; j++)
  {
    if (j % 20 == 0)
    {
      printf("\n");
    }

    printf("%2d", a[j]);
  }
}