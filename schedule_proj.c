#include<stdio.h> 
#include<string.h>
int main() 
{
int i,j,n,burst_time[10],process[10];
  int waiting_time=0,turnaround_time=0;
  float average_waiting,average_turnaround;
  int time;
  int f=0; 
  int arrival_time[10],remaningt[10]; 
  int rp=n;
printf("PREEMPTIVE SHORTEST JOB FIRST SCHEDULER\n");
int time_limit=10;

 printf("Enter the total number of processes to be held:");
scanf("\n%d",&n);
  rp=n; 
 printf("\nEnter Arrival Time for: \n");
for(i=0;i<n;i++)
{
        printf("p%d:",i+1);
        scanf("%d",&arrival_time[i]);   
}
}