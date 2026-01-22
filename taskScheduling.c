
#include <stdio.h>

typedef struct task {
  int id;
  int deadline;
  int profit;
} tsk;

void selectionSortdesc(tsk list[], int length);
int main() {
  tsk allJobs[] = {
      {1, 3, 50}, {2, 4, 20}, {3, 5, 70}, {4, 3, 15},
      {5, 2, 10}, {6, 1, 47}, {7, 1, 60},
  };
  int length = sizeof(allJobs) / sizeof(allJobs[0]);
  selectionSortdesc(allJobs, length);
  for (int i = 0; i < length; i++) {
    printf("profit: %d\n", allJobs[i].profit);
  }
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
