/*
There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
*/

#include <stdio.h>
#include <stdbool.h>

void maxCandies(int n, int arr[], int extracandies, bool result[]) {
    int maxCandies = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxCandies) {
            maxCandies = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        result[i] = (arr[i] + extracandies) >= maxCandies;
    }
}

int main() {
    int n;
    printf("How many elements do you want in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements in the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int extracandies;
    printf("Enter the number of extra candies: ");
    scanf("%d", &extracandies);
    
    bool result[n];
    maxCandies(n, arr, extracandies, result);

    printf("Result array: [");
    for (int i = 0; i < n - 1; i++) {
        printf("%s, ", result[i] ? "true" : "false");
    }
    printf("%s]\n", result[n - 1] ? "true" : "false");

    return 0;
}
