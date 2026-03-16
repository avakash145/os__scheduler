#include "process.h"
#include <stdio.h>

void print_process(Process p)
{
    printf("PID: %d | Burst: %d | Waiting: %d | Turnaround: %d\n",
           p.pid, p.burst_time, p.waiting_time, p.turnaround_time);
}