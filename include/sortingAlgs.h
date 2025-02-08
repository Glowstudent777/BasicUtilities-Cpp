#ifndef SORTINGALGS_H
#define SORTINGALGS_H

enum class SortOrder
{
    Ascending,
    escending
};

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int size, SortOrder order = SortOrder::Ascending)
{
    int maxElement, index;

    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            bool swap = (order == SortOrder::Ascending)
                            ? (arr[i] > arr[index + 1])
                            : (arr[index] < arr[index + 1]);

            if (swap)
                swap(arr[index], arr[index + 1])
        };
    }
}

template <typename T>
void selectionSort(T arr[], int size, SortOrder order = SortOrder::Ascending)
{
    for (int start = 0; start < (size - 1); start++)
    {
        int selIndex = start;

        for (int i = start + 1; i < size; i++)
        {
            bool swap = (order == SortOrder::Ascending)
                            ? (arr[i] > arr[selIndex])
                            : (arr[i] < arr[selIndex]);

            if (swap)
                selIndex = i;
        }
        if (selIndex != start)
            swap(arr[start], arr[selIndex]);
    }
}

#endif
