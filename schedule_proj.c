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
printf("SCHEDULER\n");
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

printf("\nEnter Burst Time for: \n");
for(i=0;i<n;i++)
{
        printf("p%d:",i+1);
        scanf("%d",&burst_time[i]);
        remaningt[i]=burst_time[i];    
}
  printf("The time limit for a single process to hold the cpu at a time is defined as:%d\t",time_limit=10); 

  printf("\n\nProcess\t Turnaround Time  Waiting Time\n\n"); 
  
  for(time=0,i=0;rp!=0;) 
  { 
    if(remaningt[i]<=time_limit && remaningt[i]>0) 
    { 
      time+=remaningt[i]; 
      remaningt[i]=0; 
      f=1; 
    } 
    else if(remaningt[i]>0) 
    { 
      remaningt[i]-=time_limit; 
      time+=time_limit=10; 
    } 
    if(remaningt[i]==0 && f==1) 
    { 
      rp--; 
      printf("P[%d]\t|\t%d\t|\t%d\n",i+1,time-arrival_time[i],time-arrival_time[i]-burst_time[i]); 
      waiting_time+=time-arrival_time[i]-burst_time[i]; 
      turnaround_time+=time-arrival_time[i]; 
      f=0; 
    } 
    if(i==n-1) 
      i=0; 
    else if(arrival_time[i+1]<=time) 
      i++; 
    else 
      i=0; 
  } 
 average_waiting= (waiting_time*1.00/n);
average_turnaround=(turnaround_time*1.00/n);
printf("average waiting time is %f and average turnaround time is %f",average_waiting,average_turnaround);


}	 
