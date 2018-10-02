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
 * @brief Implementation file for my C-programming code
 *
 * The file contains some functions that can analyze an array of unsigned char data
 * items and report analytics on the maximum, minimum, mean, and median of the data set. 
 *
 * @author Gaurav Mishra
 * @date 02-Oct-2018
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

  print_statistics(test, SIZE);
  printf("\nDecreasingly Sorted Array: ");
  print_array(test, SIZE);

}

void print_statistics(unsigned char* test,  unsigned int size)
{
        printf("Statistics of the given array: \n");
        printf("\tMean: %d\n", find_mean(test, size));
        printf("\tMedian: %d\n", find_median(test, size));
        printf("\tMaximum: %d\n", find_maximum(test, size));
        printf("\tMinimum: %d\n", find_minimum(test, size));

}


void print_array(unsigned char* test,  unsigned int size)
{
        int i;
        for(i=0;i<size;i++)
        {
                printf("%d ", test[i]);
        }
        printf("\n");
}

unsigned char find_median(unsigned char* test,unsigned int size) 
{ 
    sort_array(test, size); 
  
    if (size % 2 != 0) 
       return test[size/2]; 
      
    return (unsigned char)(test[(size-1)/2] + test[size/2])/2; 
} 

unsigned char find_mean(unsigned char* test,unsigned int size) 
{
    unsigned int sum = 0; 
    int i;
    for (i = 0; i < size; i++)  
    {
        sum = sum+test[i];
    } 
    
    return (unsigned char)((sum)/(unsigned char)size); 
}

unsigned char find_maximum(unsigned char* test,unsigned int size) 
{
    unsigned char maxm = 0; 
    int i;
        for (i = 0; i < size; i++)  
        {
                if(maxm<test[i])
                {
                        maxm = test[i];
                }
        }
        
      
    return maxm; 
}


unsigned char find_minimum(unsigned char* test,unsigned int size) 
{
    unsigned char minm = test[0]; 
    int i;
        for (i = 1; i < size; i++)  
        {
                if(minm>test[i])
                {
                        minm = test[i];
                }
        }
        
      
    return minm; 
}


void sort_array(unsigned char* test,  unsigned int size)
{
          int i, j; 
           for (i = 0; i < size-1; i++)       
                for (j = 0; j < size-i-1; j++)  
                   if (test[j] < test[j+1]) 
                      {
                        unsigned char temp =test[j];
                        test[j]=test[j+1];
                        test[j+1]=temp;
                      }
}
