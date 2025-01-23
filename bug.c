int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr + 5; // Pointing beyond the array
  *ptr = 6; // Write beyond the array bounds
  return 0;
}