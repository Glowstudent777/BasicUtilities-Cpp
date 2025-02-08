#ifndef SORTINGALGS_H
#define SORTINGALGS_H

enum class Sort
{
    ascending,
    descending
};

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int size)
{
    int maxElement, index;

    for (maxElement = size - 1; maxElement > 0; maxElement--)
        for (index = 0; index < maxElement; index++)
            if (arr[index] > arr[index + 1])
                swap(arr[index], arr[index + 1]);
}

template <typename T>
void selectionSort(T arr[], int size)
{
    int minIndex, minValue;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = arr[start];

        for (int i = start + 1; i < size; i++)
        {
            if (arr[i] < minValue)
            {
                minValue = arr[i];
                minIndex = i;
            }
        }
        swap(arr[minIndex], arr[start]);
    }
}

#endif
