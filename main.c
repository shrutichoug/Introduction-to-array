//WAP to accept input from user in an array and display the sum and average
#include<stdio.h>
int main()
{
    int i;float marks[5];float sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter value %d \n",(i+1));
        scanf("%f",&marks[i]); // Accepting user input
        sum=sum+marks[i]; // sum of data entered or input
    }
    printf("The average value is %f",sum/5);
}// average of the data
