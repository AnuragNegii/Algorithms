
#include <stdio.h>

typedef struct task {
  int id;
  int deadline;
  int profit;
} tsk;

typedef struct profit {
  int id;
  int profit;
} jobScheduler;

void selectionSortdesc(tsk list[], int length);
int main() {
  tsk allJobs[] = {
      {1, 3, 50}, {2, 4, 20}, {3, 5, 70}, {4, 3, 15},
      {5, 2, 10}, {6, 1, 47}, {7, 1, 60},
  };
  int length = sizeof(allJobs) / sizeof(allJobs[0]);

  // Setting all id and profit to -1 in which jobs to do
  int deadlineMax = 5;
  jobScheduler job[deadlineMax] = {};
  for (int i = 0; i < deadlineMax; i++) {
    job[i].id = -1;
    job[i].profit = -1;
  }

  // Sorting all jobs according to profit
  selectionSortdesc(allJobs, length);
  for (int i = 0; i < length; i++) {
    printf("profit: %d deadline: %d\n", allJobs[i].profit, allJobs[i].deadline);
  }

  // Run algo till we fill all of job
  for (int i = 0; i < length; i++) {
    for (int j = allJobs[i].deadline - 1; j >= 0; j--) {
      if (job[j].id == -1) {
        job[j].id = allJobs[i].id;
        job[j].profit = allJobs[i].profit;
        break;
      }
    }
  }

  // calculate profit and all the job
  int totalProfit = 0;
  for (int i = 0; i < deadlineMax; i++) {
    printf("JobSelected : %d, Profit: %d\n", job[i].id, job[i].profit);
    totalProfit += job[i].profit;
  }
  printf("Total Profit:%d\n", totalProfit);

  return 0;
}

void selectionSortdesc(tsk list[], int length) {
  for (int i = 0; i < length; i++) {
    int largest_idx = i;
    for (int j = i + 1; j < length; j++) {
      if (list[j].profit > list[largest_idx].profit) {
        largest_idx = j;
      }
    }
    tsk temp = list[i];
    list[i] = list[largest_idx];
    list[largest_idx] = temp;
  }
}
