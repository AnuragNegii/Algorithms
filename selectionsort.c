#include <stdio.h>

void selectionsortasc(int list[], int length);
void selectionsortdesc(int list[], int length);
int main() {
  int list[] = {55, 25, 15, 60, 35, 17, 65, 75, 10};
  int length = sizeof(list) / sizeof(list[0]);

  selectionsortdesc(list, length);
  for (int i = 0; i < length; i++) {
    printf("%d\n", list[i]);
  }
  return 0;
}

void selectionsortasc(int list[], int length) {
  for (int i = 0; i < length; i++) {
    int smallest_idx = i;
    for (int j = i + 1; j < length; j++) {
      if (list[j] < list[smallest_idx]) {
        smallest_idx = j;
      }
    }
    int temp = list[i];
    list[i] = list[smallest_idx];
    list[smallest_idx] = temp;
  }
}

void selectionsortdesc(int list[], int length) {
  for (int i = 0; i < length; i++) {
    int largest_idx = i;
    for (int j = i; j < length; j++) {
      if (list[j] > list[largest_idx]) {
        largest_idx = j;
      }
    }
    int temp = list[i];
    list[i] = list[largest_idx];
    list[largest_idx] = temp;
  }
}
