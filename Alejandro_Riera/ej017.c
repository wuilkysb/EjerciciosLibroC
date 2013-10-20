/*
 * =====================================================================================
 *
 *       Filename:  ej017.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/10/13 19:52:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void) {
   char i;
   printf("+---------+----------+\n");
   printf("| Decimal | Caracter |\n");
   printf("+---------+----------+\n");

   for(i=32;i<=126;i++)
       printf("|%8hd | %7c  |\n",i,i);
   printf("+---------+----------+");
   printf("\n");
  return 0;
}
