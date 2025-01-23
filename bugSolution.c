int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr;
  int index = 5;
  if(index >= 0 && index < 5) { // Check index in bounds
      *(arr + index) = 6; // Write to the array correctly
  }
  return 0;
}