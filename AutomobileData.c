#include <stdio.h>
#include <string.h>
/*
Author: Blake Pinos
Created: April 29, 2022
*/

struct Auto_t{
char make[20];
char model[20];
int odometer;
char mdate[20];
char pdate[20];
float tank;
float fuel;
} Automobiles[4];

int main(void){
void scan_auto();
//Calls the scan auto function 
scan_auto();
return 0;
}

void scan_auto(){
int i;
//For loop for 4 cars that asks the user to input each car information and prints and stores them
for(i=0;i<2;i++){
printf("Enter the information of car %d: \n",i+1);
printf("Enter the cars make: \n");
scanf("%s", Automobiles[i].make);
printf("Enter the cars model: \n");
scanf("%s", Automobiles[i].model);
printf("Enter the cars odometer: \n");
scanf("%d", &Automobiles[i].odometer);
printf("Enter the cars manufacture date with /: \n");
scanf("%s", Automobiles[i].mdate);
printf("Enter the cars purchase date with /: \n");
scanf("%s", Automobiles[i].pdate);
printf("Enter the cars tank capacity: \n");
scanf("%f", &Automobiles[i].tank);
printf("Enter the cars current fuel level: \n");
scanf("%f", &Automobiles[i].fuel);
}

//PRINTS HEADER
printf("The information for the cars are: \n");
printf("MAKE \t");
printf("  MODEL\t\t");
printf("ODOMETER \t");
printf("MAKE DATE \t\t"); 
printf("PURCHASE DATE \t\t");
printf("TANK CAPACITY \t\t");
printf("FUEL LEVEL \t\t");
printf("\n");
//Prints out the information of the 4 cars
for(i=0;i<2;i++){
printf("%s\t", Automobiles[i].make);
printf("  %s\t", Automobiles[i].model);   
printf("%d\t\t", Automobiles[i].odometer);   
printf("%s\t\t", Automobiles[i].mdate);  
printf("%s\t\t", Automobiles[i].pdate);   
printf("%.1f\t\t", Automobiles[i].tank);   
printf("%.1f\t\t", Automobiles[i].fuel);
printf("\n");
}

}



