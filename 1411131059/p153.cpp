// Fig. 4.6: fig04_06.c
// Calculating compound interest
#include <stdio.h>
#include <math.h>  

int main(void)
{
	double principal;
	printf("��J�Ĥ@�~�����G");
	scanf("%lf", &principal) ;
	double rate;
	printf("��J�w�s�Q�v(%%)�G");
	scanf("%lf", &rate) ;
	int period;
	printf("��J�w�s�h�[�]�~�^�G");
	scanf("%d", &period) ;

   // output table column heads
   printf("%4s%21s\n","Year", "Amount on deposit");

   // calculate amount on deposit for each of ten years
   for (unsigned int year = 0; year <= period; ++year) {

      // calculate new amount for specified year
      double amount = principal * pow(1.0 + rate, year);

      // output one table row
      printf("%4u%21.2f\n", year, amount);  
	  
   }
} 

