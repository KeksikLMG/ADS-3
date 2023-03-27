// Copyright 2021 NNTU-CS
int fbsearch(int const *arr, const int &size, const int &key) {
    if (size == 0 || size == 1)
        return -1;
    if (key == arr[size / 2]) {
        int cur = size / 2;
        while (cur > -1 && arr[cur--] == key) {}
        ++cur;
        return cur;
    }
    if (key < arr[size / 2])
        return fbsearch(arr, size / 2, key);
    int tmp = fbsearch(arr + size / 2, size / 2 + size % 2, key);
    if (tmp != -1)
        return tmp + size / 2;
    else
        return tmp;
}

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
    int index = fbsearch(arr, size, value);
    if (index == -1)
        return 0;
    int valueCount = 0;
    while (index < size) {
        if (arr[index++] == value)
            ++valueCount;
    }
    return valueCount;
}
