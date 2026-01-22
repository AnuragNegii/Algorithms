
#include <stdbool.h>
#include <stdio.h>

typedef struct Item {
  int profit;
  int weight;
  float ratio;
} it;

void bubblesortdesc(it arr[], int length);

int main() {
  it items[] = {{20, 4, 0}, {30, 8, 0}, {40, 10, 0}, {32, 12, 0}, {55, 15, 0}};
  int length = sizeof(items) / sizeof(items[0]);
  int capacity = 18;
  float totalProfit = 0.0f;

  for (int i = 0; i < length; i++) {
    items[i].ratio = (float)items[i].profit / items[i].weight;
  }

  bubblesortdesc(items, length);
  for (int i = 0; i < length; i++) {
    printf("profit: %d, weight: %d, ratio:%.2f\n", items[i].profit,
           items[i].weight, items[i].ratio);
  }

  for (int i = 0; i < length; i++) {
    if (capacity > 0) {
      if (capacity >= items[i].weight) {
        capacity -= items[i].weight;
        totalProfit += items[i].profit;
      } else {
        totalProfit += ((float)capacity / items[i].weight) * items[i].profit;
        capacity = 0;
        break;
      }
    }
  }
  printf("capacity: %d\n", capacity);
  printf("totalProfit: %.2f\n", totalProfit);
}

void bubblesortdesc(it list[], int length) {
  bool swap = true;
  while (swap) {
    swap = false;
    for (int i = length - 2; i >= 0; i--) {
      if (list[i + 1].ratio > list[i].ratio) {
        it temp = list[i];
        list[i] = list[i + 1];
        list[i + 1] = temp;
        swap = true;
      }
    }
  }
}
