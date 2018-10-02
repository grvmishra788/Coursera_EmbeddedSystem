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
 * @brief Includes declarations and documentation for the functions from the stats.c file
 *
 * This header file includes declarations and documentation for the functions from the stats.c file. 
 * I have added function declarations for all required functions except main. 
 * With each declaration I have provided comments with a description of the function, the inputs, and return value. 
 *
 * @author Gaurav Mishra
 * @date 02-Oct-2018
 *
 */
 
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median. 
 *
 * This function takes as input a unsigned char pointer to an n-element
 * data array and an unsigned integer representing the size of the array.
 * It then prints the statistics of an array including minimum, maximum, mean, and median
 * and returns a void type.
 *
 * @param test  A unsigned char pointer to an n-element data array
 * @param size  An unsigned integer as the size of the array
 *
 * @return a void type.
 */

void print_statistics(unsigned char* test,  unsigned int size);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * This function takes as input a unsigned char pointer to an n-element
 * data array and an unsigned integer representing the size of the array.
 * It then prints the array to the screen
 * and returns a void type.
 *
 * @param test  A unsigned char pointer to an n-element data array
 * @param size  An unsigned integer as the size of the array
 *
 * @return a void type.
 */

void print_array(unsigned char* test,  unsigned int size);


/**
 * @brief Returns the median value of an array of data 
 *
 * This function takes as input a unsigned char pointer to an n-element
 * data array and an unsigned integer representing the size of the array.
 * It then performs statistical analysis on the array to find the median of 
 * the data elements present there and returns the median.
 *
 * @param test  A unsigned char pointer to an n-element data array
 * @param size  An unsigned integer as the size of the array
 *
 * @return An unsigned char result which is the median of all the data items present in the array
 */

unsigned char find_median(unsigned char* test,  unsigned int size);

/**
 * @brief Returns the mean value of an array of data 
 *
 * This function takes as input a unsigned char pointer to an n-element
 * data array and an unsigned integer representing the size of the array.
 * It then performs statistical analysis on the array to find the mean of 
 * the data elements present there and returns the mean.
 *
 * @param test  A unsigned char pointer to an n-element data array
 * @param size  An unsigned integer as the size of the array
 *
 * @return An unsigned char result which is the mean of all the data items present in the array
 */

unsigned char find_mean(unsigned char* test,  unsigned int size);

/**
 * @brief Returns the maximum value of an array of data 
 *
 * This function takes as input a unsigned char pointer to an n-element
 * data array and an unsigned integer representing the size of the array.
 * It then performs statistical analysis on the array to find the maximum of 
 * the data elements present there and returns the maximum.
 *
 * @param test  A unsigned char pointer to an n-element data array
 * @param size  An unsigned integer as the size of the array
 *
 * @return An unsigned char result which is the maximum of all the data items present in the array
 */

unsigned char find_maximum(unsigned char* test,  unsigned int size);

/**
 * @brief Returns the minimum value of an array of data 
 *
 * This function takes as input a unsigned char pointer to an n-element
 * data array and an unsigned integer representing the size of the array.
 * It then performs statistical analysis on the array to find the minimum of 
 * the data elements present there and returns the minimum.
 *
 * @param test  A unsigned char pointer to an n-element data array
 * @param size  An unsigned integer as the size of the array
 *
 * @return An unsigned char result which is the minimum of all the data items present in the array
 */

unsigned char find_minimum(unsigned char* test,  unsigned int size);


/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest
 *
 * This function takes as input a unsigned char pointer to an n-element
 * data array and an unsigned integer representing the size of the array.
 * It then sorts the array from largest to smallest
 * and returns a void type.
 *
 * @param test  A unsigned char pointer to an n-element data array
 * @param size  An unsigned integer as the size of the array
 *
 * @return a void type.
 */

void sort_array(unsigned char* test,  unsigned int size);


#endif /* __STATS_H__ */
