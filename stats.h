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


#ifndef __STATS_H__
#define __STATS_H__
/* Add Your Declarations and Function Comments here */ 
int find_mean(unsigned char *arr_ptr, int arr_length);
int find_median(unsigned char *arr_ptr, int arr_length);
int sort_array(unsigned char *arr_ptr, int arr_length);
int print_statistics(int mean, int median, int max, int min);
int print_array(unsigned char *arr_ptr, int arr_length);
int find_maximum(unsigned char *arr_ptr, int arr_length);
int find_minimum(unsigned char *arr_ptr, int arr_length);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
/******************************************************************************
 * Function: find_mean
 * Description:
 *     This function takes a set of numbers and performs finds the mean of
 *     of the set.
 * Parameters:
 *     int * arr_ptr: Pointer to a data set(array)
 *     int arr_length: Number of items in data set(array)
 * Return: 
 *     Average of the numbers provided.
 *****************************************************************************/
/******************************************************************************
 * Function: sort_array
 * Description:
 *     This function takes a set of numbers and sorts it from least to
 *     greatest.
 * Parameters:
 *     int * arr_ptr: Pointer to a data set(array)
 *     int arr_length: Number of items in data set(array)
 * Return: 
 *     Sorted array.
 *****************************************************************************/
/******************************************************************************
 * Function: find_median
 * Description:
 *     This function takes a set of numbers and finds the median of
 *     of the set.
 * Parameters:
 *     int * arr_ptr: Pointer to a data set(array)
 *     int arr_length: Number of items in data set(array)
 * Return: 
 *     median of the numbers provided.
 *****************************************************************************/
/******************************************************************************
 * Function: find_maximum
 *     This function takes a set of numbers and finds the maximum of
 *     of the set.
 * Parameters:
 *     int * arr_ptr: Pointer to a data set (array)
 *     int arr_length: Number of items in data set (array)
 * Return: 
 *     maximum number in the given set
 *****************************************************************************/
/******************************************************************************
 * Function: find_minimum
 * Description:
 *     This function takes a set of numbers and finds the minimum of
 *     of the set.
 * Parameters:
 *     int * arr_ptr: Pointer to a data set(array)
 *     int arr_length: Number of items in data set(array)
 * Return: 
 *    minuimum number in the given set
 *****************************************************************************/
/******************************************************************************
 * Function: print_array
 * Description:
 *     This function takes a set of numbers and prints the members
 *     
 * Parameters:
 *     int * arr_ptr: Pointer to a data set(array)
 *     int arr_length: Number of items in data set(array)
 * Return: 
 *    void
 *****************************************************************************/
/******************************************************************************
 * Function: print_statistics
 * Description:
 *     This function takes a set of numbers and prints the statistics like mean,
 *     median, max, min of that set
 * Parameters:
 *     int * arr_ptr: Pointer to a data set(array)
 *     int arr_length: Number of items in data set(array)
 * Return: 
 *    void
 *****************************************************************************/

#endif /* __STATS_H__ */
