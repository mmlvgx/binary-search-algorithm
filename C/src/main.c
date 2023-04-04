#include <stdio.h>
#include <math.h>

int search(char* array[], char* target, int start, int end)
{
    if (start > end) {
        // Not Found
        return 1;
    }

    int middle = floor((start + end) / 2);

    if (array[middle] == target) {
        return middle;
    }
    // Recursion
    else if (array[middle] > target) {
        // Search left
        return search(array, target, start, end - 1);
    }
    else {
        // Search right
        return search(array, target, start + 1, end);
    }
}

int main()
{
    char* array[6] = {"a", "b", "c", "x", "y", "z"};

    int element = search(array, "c", 0, 6);

    printf("Result: %i", element);
}