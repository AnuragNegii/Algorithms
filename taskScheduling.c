
typedef struct task {
  int job;
  int serviceTime;
  int deadline;
} tsk;

int main() {
  tsk allJobs[] = {
      {1, 3, 50}, {2, 4, 20}, {3, 5, 70}, {4, 3, 15},
      {5, 2, 10}, {6, 1, 47}, {7, 1, 60},
  };

  return 0;
}
