
#include <stdio.h>
#include <math.h>  

int main(void)
{
   double principal; 
   printf("��J�Ĥ@�~����:");
   scanf("%lf",&principal);   
   double rate; 
   printf("��J�w�s�Q�v(%%):");
   scanf("%lf",&rate);
   int period;
   printf("��J�w�s�h�[(�~):");
   scanf("%d",&period);

   printf("%4s%21s\n", "Year", "Amount on deposit");

   
   for (unsigned int year = 1; year <= period; ++year) {

      
      double amount = principal * pow(1.0 + rate,year);

       
      printf("%4u%21.2f\n", year, amount);   
   }
} 
