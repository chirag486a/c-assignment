#include <stdio.h>

int main() {
    // Example values, replace with your own
    float initialCost = 10000.0;  // Initial cost of the asset
    float salvageValue = 2000.0;  // Estimated salvage value
    int usefulLife = 5;           // Useful life of the asset in years

    // Calculate depreciation
    float depreciation = (initialCost - salvageValue) / usefulLife;

    // Display the result
    if (usefulLife > 0) {
        printf("Initial Cost: $%.2f\n", initialCost);
        printf("Salvage Value: $%.2f\n", salvageValue);
        printf("Useful Life: %d years\n", usefulLife);
        printf("Depreciation per year: $%.2f\n", depreciation);
    } else {
        printf("Error: Useful life should be greater than zero.\n");
    }

    return 0;
}

