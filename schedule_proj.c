#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i, j, n,burst_time[50],process[50],waiting_time[50],turnaround_time[50];
double average_waiting,average_turnaround;
printf("Enter the total number of processes to be held:");
scanf("\n%d",&n);
int arrival_time[50],time_limit=10;
int rt[10];
int rp=n;

printf("\nEnter Arrival Time for: \n");
for(i=0;i<n;i++)
{
        printf("p%d:",i+1);
        scanf("%d",&arrival_time[i]);
        process[i]=i+1;          
}

printf("\nEnter Burst Time for: \n");
for(i=0;i<n;i++)
{
        printf("p%d:",i+1);
        scanf("%d",&burst_time[i]);
        process[i]=i+1;          
}
printf("The time limit for a single process to hold the cpu at a time is defined as %d",time_limit);
time=0,count=0;
  for(remaining!=0) 
  { 
    if(rt[count]<=time_limit && rt[count]>0) 
    { 
      time+=rt[count]; 
      rt[count]=0; 
      flag=1; 
    } 
    else if(rt[count]>0) 
    { 
      rt[count]-=time_limit; 
      time+=time_limit; 


}
