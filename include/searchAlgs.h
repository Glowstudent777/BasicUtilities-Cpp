#ifndef SEARCHALGS_H
#define SEARCHALGS_H

template <typename T>
int binarySearch(T arr[], int index, T value)
{
    int first = 0, last = numElems - 1, middle;

    while (first <= last)
    {
        middle = first + (last - first) / 2;

        if (arr[middle] == value)
            return middle;

        else if (arr[middle] > value)
            last = middle - 1;

        else
            first = middle + 1;
    }

    return -1;
}

#endif
