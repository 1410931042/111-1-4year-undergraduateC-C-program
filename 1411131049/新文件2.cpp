
#include <stdio.h>
#include <math.h>  

int main(void)
{
   double principal; 
   printf("輸入第一年本金:");
   scanf("%lf",&principal);   
   double rate; 
   printf("輸入定存利率(%%):");
   scanf("%lf",&rate);
   int period;
   printf("輸入定存多久(年):");
   scanf("%d",&period);

   printf("%4s%21s\n", "Year", "Amount on deposit");

   
   for (unsigned int year = 1; year <= period; ++year) {

      
      double amount = principal * pow(1.0 + rate,year);

       
      printf("%4u%21.2f\n", year, amount);   
   }
} 
