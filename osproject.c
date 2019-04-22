/* CPU schedule N processes which arrive at different time intervals and each process is allocated the cpu for a specific user input
time unit, processes are scheduled using a preemptive round robin scheduling algorithm . each processes must be assigned a numerical priority with
a higher number indicating a higher relative priority.in addition to the processes one task has priority 0. the length of a time quantum T units where 
T is the custom time considered as time quantum for processing. if a process is preempted by a higher priority process the preempted process is placed
at the end of the queue.
Design a scheduler so that the task with priority 0 does not starve for resources and gets the cpu at some time unit to execute.also compute waiting time
and turn around time
********************************************************************************************************************************************************
we use formula for 
1. turn around time=Exit time - arriaval time
2. waiting time = turn arround time - burst time
*/ 
