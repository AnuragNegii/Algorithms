
#include <stdbool.h>
#include <stdio.h>

void bubblesortasc(int list[], int length);
void bubblesortdesc(int list[], int length);
int main() {
  int list[] = {55, 25, 15, 60, 35, 17, 65, 75, 10};
  int length = sizeof(list) / sizeof(list[0]);
  bubblesortdesc(list, length);

  for (int i = 0; i < length; i++) {
    printf("%d\n", list[i]);
  }
  return 0;
}

void bubblesortasc(int list[], int length) {
  int temp;
  bool swap = true;
  while (swap) {
    swap = false;
    for (int i = 1; i < length; i++) {
      if (list[i - 1] > list[i]) {
        temp = list[i];
        list[i] = list[i - 1];
        list[i - 1] = temp;
        swap = true;
      }
    }
  }
}

void bubblesortdesc(int list[], int length) {
  int temp;
  bool swap = true;
  while (swap) {
    swap = false;
    for (int i = length - 2; i >= 0; i--) {
      if (list[i + 1] > list[i]) {
        temp = list[i];
        list[i] = list[i + 1];
        list[i + 1] = temp;
        swap = true;
      }
    }
  }
}
