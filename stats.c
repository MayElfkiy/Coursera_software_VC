/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = {34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  float mean=0;
  int i=0;
  int max=0;
  int min=0;
  float median=0;

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  mean=find_mean(test, SIZE);
  sort_array(test, SIZE);
  print_array(test, SIZE);
  median=find_median(test,SIZE);
  max= find_maximum(test,SIZE);
  min=find_minimum(test, SIZE);
  print_statistics(mean,median,max,min);

}

/* Add other Implementation File Code Here */
void print_array(unsigned char *arr_ptr, int arr_length){
  int i=0;
  printf("\n Array elemnts = \n");
  for(i=0;i<arr_length;i++){
      printf("\t %d \n", arr_ptr[i]);

  }
}
float find_mean(unsigned char *arr_ptr, int arr_length){
  int count=0;
  int sum=0;
  float mean=0;
  for(count=0; count<arr_length;count++){
    sum+= arr_ptr[count];
  }
   printf("\n sum = %d \n", sum);
  mean = ((float)sum/2.0);
  return mean;
}

int sort_array(unsigned char *arr_ptr, int arr_length){
  printf("\n \n Now sorting... \n\n");
  int i=0;
  int temp=0;
  int j=0;
  for(j=0; j<arr_length;j++){
    for(i=0; i<arr_length-1;i++){
      if(arr_ptr[i]> arr_ptr[i+1]){
        temp=arr_ptr[i];
        arr_ptr[i]=arr_ptr[i+1];
        arr_ptr[i+1]=temp;
    }
     
    }
  }
}
  
float find_median(unsigned char *arr_ptr, int arr_length){
  float median=0;
  float mid_avg=0;
  if((arr_length%2)==0){
      printf("\n \nEven Length...\n\n");
      mid_avg= arr_ptr[(arr_length/2)]+arr_ptr[((arr_length/2)+1)];
      median= (mid_avg/2);
  }
  else{
    printf("\n \nOdd Length...\n\n");
    median=arr_ptr[(arr_length+1)/2];
  }
  return median;
}
void print_statistics(float mean, float median, int max, int min){
  printf("\n mean = %f \n", mean);
  printf("\n median= %f \n", median);
  printf("\n max= %d \n", max);
  printf("\n min= %d \n", min);
}

int find_maximum(unsigned char *arr_ptr, int arr_length){
  int max=0;
  int i=0;

  for(i=0;i<arr_length;i++){
    if(arr_ptr[i]>max){
      max= arr_ptr[i];
    }
  }
  return max;
}

int find_minimum(unsigned char *arr_ptr, int arr_length){
  int min=arr_ptr[0];
  int i=0;
  for(i=0;i<arr_length;i++){
    if (arr_ptr[i]<min){
      min=arr_ptr[i];

    }
  }
  return min;
}