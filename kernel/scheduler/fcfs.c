#include <stdio.h>
#include "../../include/scheduler.h"

void fcfs_scheduler(Process processes[], int n)
{int time = 0;
    for(int i = 0; i < n; i++)
    {
        processes[i].waiting_time = time;
        time += processes[i].burst_time;
        processes[i].turnaround_time = time;
    }
}
void print_results(Process processes[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("P%d WT=%d TAT=%d\n",
               processes[i].pid,
               processes[i].waiting_time,
               processes[i].turnaround_time);
    }
}