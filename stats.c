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
  int mean=0;
  int i=0;
  int max=0;
  int min=0;

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  mean=find_mean(test, SIZE);
  print_statistics(mean,0,0,0);

}

/* Add other Implementation File Code Here */
int print_array(unsigned char *arr_ptr, int arr_length){
  int i=0;
  printf("\n Array elemnts = \n");
  for(i=0;i<arr_length;i++){
      printf("%d \t", arr_ptr[i]);

  }
}
int find_mean(unsigned char *arr_ptr, int arr_length){
  int count=0;
  int sum=0;
  int mean=0;
  for(count=0; count<arr_length;count++){
    sum+= arr_ptr[count];
  }
   printf("\n sum = %d \n", sum);
  mean = sum/2;
  return mean;
}
int find_median(unsigned char *arr_ptr, int arr_length){}
int sort_array(unsigned char *arr_ptr, int arr_length){}
int print_statistics(int mean, int median, int max, int min){
  printf("\n mean = %d \n", mean);
}
int find_maximum(unsigned char *arr_ptr, int arr_length){}
int find_minimum(unsigned char *arr_ptr, int arr_length){}