#include <iostream>
using namespace std;

void output_subarr(int arr[], int i, int j) {
  cout << "{ ";
  for (int k = i; k < j; k++) {
    cout << arr[k] << ", ";
  }
  cout << arr[j] << " }";
}

void find_longets_subarr(int arr[], int n) {
  int max_len = 1;
  int ending_index = 0;
  int curr_len = 1;

  for (int i = 1; i < n; i++) {
    if (arr[i] * arr[i - 1] < 0) {
      curr_len++;
      if (curr_len > max_len) {
        max_len = curr_len;
        ending_index = i;
      }
    } else {
      curr_len = 1;
    }
  }

  cout << "Найдовша підпослідовність елементів різних знаків:";
  output_subarr(arr, (ending_index - max_len + 1), ending_index);
}

int main() {
  int arr_len = 6;
  int *arr = (int *)malloc(arr_len * sizeof(int));
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = -4;
  arr[3] = 5;
  arr[4] = 5;
  arr[4] = 1;

  find_longets_subarr(arr, arr_len);

  delete[] arr;

  return 0;
}
