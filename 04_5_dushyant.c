/* DUSHYANT BHAGWAT
    IT - 04 */
// largest element in an array
 
#include<stdio.h>
 void main()
 {
     int n, a[100], large;
     printf("enter the number of elemtnts:\n");
     scanf("%d", &n);

     for (int i = 0; i <= n - 1; i++)
     {
         printf("enter a number:");
         scanf("%d", &a[i]);
     }

     large = a[0];
     for (int i = 0; i <= n - 1; i++)
     {

         if (large < a[i])
             large = a[i];
     }
     printf("the largets number is %d", large);
 }

