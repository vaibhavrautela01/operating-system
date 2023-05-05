#include<stdio.h>
struct process{
    int pid;
    int bt;
    int tat;
    int wt;
}
p[10];
int main()
{
    int i,n;
    int tott=0,totw=0;
    printf("----------------------------------------------");
    printf("\n FCFS scheduling...\n");
    printf("----------------------------------------------");
    printf("\nenter the number of process: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p[i].pid=1;
        printf("\n brust time of the process P[%d]: ",i+1);
        scanf("%d",&p[i].bt);
    }
        p[0].wt=0;
        p[0].tat=p[0].bt;
        
        printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
 
        for(i=0;i<n;i++)
        {
            p[i].wt=p[i-1].wt+p[i-1].bt;
            p[i].tat=p[i].wt+p[i].bt;
            tott+=p[i].tat;
            totw+=p[i].wt;
            printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,p[i].bt,p[i].wt,p[i].tat);
        }
        
        printf("\ntotal waiting time: %d",totw);
        printf("\naverage waiting time: %d",totw/n);
        printf("\ntotal turn around time: %d",tott);
        printf("\naverage turn around time: %d",tott/n);
}
