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
 * @file stats.c 
 * @brief This file has functions to do some operations on array
 *
 * Show some statistics about the array (mean, median, maximum, minimum)
 * Sorting the array
 * Swap elements
 * Print the array
 * @author Ahmed Alaa
 * @date Jan 28, 2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char maximum, minimum, median, mean;
  /* Statistics and Printing Functions Go Here */
  printf("the entered array: \n");
  print_array(test, SIZE);

  sort_array(test, SIZE);

  printf("Array after sorting: \n");
  print_array(test, SIZE);

  maximum = find_maximum(test, SIZE);
  minimum = find_minimum(test, SIZE);
  median  = find_median(test, SIZE);
  mean    = find_mean(test, SIZE);

  print_statistics(minimum, maximum, mean, median);

}

/* Add other Implementation File Code Here */
void sort_array(unsigned char * arr, unsigned int array_size){
	unsigned int i,j,pos_of_max;
	unsigned char max;
	for(i = 0 ; i < array_size ; i++){
		pos_of_max = i;
		for(j = i+1 ; j < array_size ; j++){
			if(arr[j]>arr[pos_of_max]){
				pos_of_max = j;
			}
		}
		swap_elements(arr, pos_of_max, i);
	}

}
void swap_elements(unsigned char * arr, unsigned int pos_of_first_element,unsigned int pos_of_second_element){
	unsigned char temp;
	temp = arr[pos_of_first_element];
	arr[pos_of_first_element] = arr[pos_of_second_element];
	arr[pos_of_second_element] = temp;
}

unsigned char find_maximum(unsigned char * arr, unsigned int array_size){
	unsigned int i;
	unsigned char max;
	max = arr[0];
	for(i = 0; i < array_size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

unsigned char find_minimum(unsigned char * arr, unsigned int array_size){
	unsigned int i;
	unsigned char min;
	min = arr[0];
	for(i = 0; i < array_size; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

unsigned char find_median(unsigned char * arr, unsigned int array_size){
	unsigned char median;
	if(array_size%2 == 0){
		median = ( arr[(array_size/2)-1] + arr[(array_size/2)] ) / 2;
	} else {
		median = arr[array_size/2];
	}
	return median;
}

unsigned char find_mean(unsigned char * arr, unsigned int array_size){
	unsigned char mean;
	unsigned int i, sum=0;
	for(i = 0 ; i < array_size ; i++){
		sum += arr[i];
	}
	mean = (sum/array_size);
	return mean;
}

void print_statistics(unsigned char minimum, unsigned char maximum,unsigned char mean,unsigned char median){
	printf("the minimum value of the array is: %d \n", minimum);
	printf("the maximum value of the array is: %d \n", maximum);
	printf("the mean of the array is: %d \n", mean);
	printf("the median value of the array is: %d \n", median);
}

void print_array(unsigned char * arr, unsigned int array_size){
	unsigned int i;
	for(i = 0; i < array_size; i++){
		printf("the array element %d is: %d \n",i+1,arr[i]);
	}
}