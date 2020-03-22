#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i, j, n,burst_time[50],process[50],waiting_time[50],turnaround_time[50];
double average_waiting,average_turnaround;
printf("Enter the total number of processes to be held:");
scanf("\n%d",&n);
printf("\nEnter Burst Time for: \n");
for(i=0;i<n;i++)
{
        printf("p%d:",i+1);
        scanf("%d",&burst_time[i]);
        process[i]=i+1;          
}
}
