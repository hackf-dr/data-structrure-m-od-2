#include <stdio.h>

int main() {
    // Variables
    unsigned long baseAddress;
    int L1, U1, L2, U2, i, j;
    int numRows, numCols;
    unsigned long address;

    // Input for bounds
    printf("Enter the lower bound for rows (L1): ");
    scanf("%d", &L1);
    printf("Enter the upper bound for rows (U1): ");
    scanf("%d", &U1);
    printf("Enter the lower bound for columns (L2): ");
    scanf("%d", &L2);
    printf("Enter the upper bound for columns (U2): ");
    scanf("%d", &U2);

    // Calculate number of rows and columns from bounds
    numRows = U1 - L1 + 1;
    numCols = U2 - L2 + 1;

    // Base address
    printf("Enter the base address (in hexadecimal, e.g., 0x10): ");
    scanf("%lx", &baseAddress);

    // Element indices
    printf("Enter the row index of the element (i): ");
    scanf("%d", &i);
    printf("Enter the column index of the element (j): ");
    scanf("%d", &j);

    // Check if indices are within array bounds
    if (i < L1 || i > U1 || j < L2 || j > U2) {
        printf("Error: Indices out of bounds.\n");
        return 1;
    }

    // Calculate address using the formula
    address = baseAddress + ((i - L1) * numCols + (j - L2));

    // Output the result
    printf("Calculated address of element at A[%d][%d]: 0x%lx\n", i, j, address);

    return 0;
}
