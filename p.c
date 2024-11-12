//                                           UNIT CONVERTER
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*void display(float l)
{
 printf("\n  ****Length Conversion****    ");
 printf("\n1. Meters to Kilometers");
 printf("\n2. Kilometers to Meters");
 printf("\n3. Miles to kilometers");
 printf("\n4. Kilometers to Miles");
 printf("\n5. Go Back!");
 printf("\nEnter your choice:");
 scanf("%d",&ch);
}*/

/*void displayy(float w)
{
 printf("\n  ****Weight Conversion****     ");
 printf("\n1. Grams to Kilograms");
 printf("\n2. Kilograms to Grams");
 printf("\n3. Pounds to Kilograms");
 printf("\n4. Kilograms to Pounds");
 printf("\n5. Go Back!");
 printf("\nEnter your choice:");
 scanf("%d",&c);
}*/

int main()
{
 int choice,ch,c;
 float length,weight;
 
 while(1)
 {
  printf("\n\n      UNIT CONVERTER        ");
  printf("\n----------------------------");
  printf("\n1. Length Conversion");
  printf("\n2. Weight Conversion");
  printf("\n3. Exit");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
 
 
 switch(choice)
 {
  case 1: //LENGTH CONVERTION
  while(1)
  {
   printf("\n---------------------------------");
   printf("\n  ****Length Conversion****    ");
   printf("\n1. Meters to Kilometers");
   printf("\n2. Kilometers to Meters");
   printf("\n3. Miles to kilometers");
   printf("\n4. Kilometers to Miles");
   printf("\n5. Go Back!");
   printf("\nEnter your choice:");
   scanf("%d",&ch);
   
   if (ch>0 && ch<5)
   {
    printf("Enter the length to be converted: ");
    scanf("%f",&length);
   
    switch(ch)
    {
     case 1 : /*Meters to Kilometers*/
     printf("\nThe length %.2fm is converted to %.2fkm\n",length,length/1000.00);break;
   
     case 2 : /*Kilometers to Meters*/
     printf("The length %.2fkm is converted to %.2fm\n",length,length*1000.00);break;
   
     case 3 : /*Miles to Kilometers*/
     printf("The length %.2fmiles is converted to %.2fkm\n",length,length*1.6);break;
   
     case 4 : /*Kilometers to Miles*/
     printf("The length %.2fkm is converted to %.2fmiles\n",length,length/1.6);break;
     
     default:
     printf("\nInvalid choice. Please try again!\n");
     break;
    }
   }
   
   else if(ch==5)
   {
    break;
   }
   else
   {
    printf("\nInvalid choice. Please try again!\n");
    //break;
   }
   //break;
   }
   break;
   
   
  case 2: //WEIGHT CONVERSION
  while(1)
  {
   printf("\n----------------------------------");
   printf("\n  ****Weight Conversion****     ");
   printf("\n1. Grams to Kilograms");
   printf("\n2. Kilograms to Grams");
   printf("\n3. Pounds to Kilograms");
   printf("\n4. Kilograms to Pounds");
   printf("\n5. Go Back!");
   printf("\nEnter your choice:");
   scanf("%d",&c);
   
   if(c>0 && c<5)
   {
    printf("Enter the weight measure to be converted: ");
    scanf("%f",&weight);
 
    switch(c)
    {

     case 1 : /*Grams to Kilogram*/
     printf("\nThe weight %.2fg is converted to %.2fkg\n",weight,weight/1000.00);break;
   
     case 2 : /*Kilograms to Grams*/
     printf("The weight %.2fkg is converted to %.2fg\n",weight,weight*1000.00);break;
   
     case 3 : /*Pounds to Kilograms*/
     printf("The weight %.2flbs is converted to %.2fkg\n",weight,weight*0.4);break;
   
     case 4 : /*Kilograms to Pounds*/
     printf("The weight %.2fkg is converted to %.2flbs\n",weight,weight/0.4);break;
   
     default:
     printf("\nnvalid choice. Please try again\n\n");
     break;
    }
  }
  else if (c==5)
  {
   break;
  }
  else
  {
   printf("\nInvalid choice. Please try again!\n\n");
   //break;
  }
  //break;
  }
  break;
 
 case 3 :
   printf("Exiting the application.\n");
   return 0;

  default:
  printf("Invalid choice. Please try again.\n");
  break;
  }
 }
  return 0;
}
