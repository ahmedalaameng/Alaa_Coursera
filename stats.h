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
 * @file stats.h 
 * @brief this file includes all function declarations that used in stats.c file
 *
 * 
 *
 * @author Ahmed Alaa
 * @date Jan 28, 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function takes unsigned character values (minimum, maximum, mean, median) and prints these values. 
 *
 * @param minimum unsigned char variable to be printed
 * @param maximum unsigned char variable to be printed
 * @param mean unsigned char variable to be printed
 * @param median unsigned char variable to be printed
 *
 * @return void no return value
 */
void print_statistics(unsigned char minimum, unsigned char maximum,unsigned char mean,unsigned char median);



/**
 * @brief A function that prints the array to the screen.
 *
 * This function takes the address and the size of an array and prints the array.
 * 
 * @param arr pointer to unsigned char array
 * @param array_size unsigned integer which holds the size of the array
 *
 * @return void no return value
 */
void print_array(unsigned char * arr, unsigned int array_size);



/**
 * @brief A function that find the median of an array.
 *
 * This function takes the address and the size of an sorted array and   
 * search for the median of the array then return the value.
 *
 * @param arr pointer to unsigned char array
 * @param array_size unsigned integer which holds the size of the array
 *
 * @return the value in the median position of the array
 */
unsigned char find_median(unsigned char * arr, unsigned int array_size);



/**
 * @brief A function that find the mean of an array.
 *
 * This function takes the address and the size of an sorted array and   
 * calculate the mean of the array then return the value.
 *
 * @param arr pointer to unsigned char array
 * @param array_size unsigned integer which holds the size of the array
 *
 * @return the value of the mean of the array
 */
unsigned char find_mean(unsigned char * arr, unsigned int array_size);



/**
 * @brief A function that find the maximum value in the array.
 *
 * This function takes the address and the size of an sorted array and   
 * finds the maximum value of the array elements then return the value.
 *
 * @param arr pointer to unsigned char array
 * @param array_size unsigned integer which holds the size of the array
 *
 * @return the value of the maximum of the array
 */
unsigned char find_maximum(unsigned char * arr, unsigned int array_size);



/**
 * @brief A function that find the minimum value in the array.
 *
 * This function takes the address and the size of an sorted array and   
 * finds the minimum value of the array elements then return the value.
 *
 * @param arr pointer to unsigned char array
 * @param array_size unsigned integer which holds the size of the array
 *
 * @return the value of the minimum of the array
 */
unsigned char find_minimum(unsigned char * arr, unsigned int array_size);



/**
 * @brief A function that sort an array.
 *
 * This function takes the address and the size of an array and   
 * sort the elements of the array, the zeroth element of the array will be the greatest value
 * and the last element in the array will be the smallest value.
 *
 * @param arr pointer to unsigned char array
 * @param array_size unsigned integer which holds the size of the array
 *
 * @return void no return value
 */
void sort_array	(unsigned char * arr, unsigned int array_size);




/**
 * @brief A function that swap two elements of an array.
 *
 * This function takes the address and the indexes of two elements in an array and   
 * swap the two elements of the array.
 *
 * @param arr pointer to unsigned char array
 * @param  pos_of_first_element unsigned integer which holds position of the first element
 * @param  pos_of_second_element unsigned integer which holds position of the first element
 *
 * @return void no return value
 */
void swap_elements (unsigned char * arr, unsigned int pos_of_first_element, unsigned int pos_of_second_element);
#endif /* __STATS_H__ */
