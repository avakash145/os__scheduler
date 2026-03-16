#include <stdio.h>
#include "process.h"
void fcfs_scheduler(Process processes[],int n);
void print_results(Process processes[],int n);
int main()
{
    int n = 3;
    Process processes[3]={
        {1, 5, 0, 0},
        {2, 3, 0, 0},
        {3, 8, 0, 0}
    };
    fcfs_scheduler(processes, n);
    print_results(processes, n);
    return 0;
}