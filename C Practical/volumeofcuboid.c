/*Write a program to calculate and display volume of cuboids’.  (H=10cm, W=12cm, L=8cm)*/
#include <stdio.h>

int main() {
    // Dimensions of the cuboid
    float height = 10.0; // in cm
    float width = 12.0;  // in cm
    float length = 8.0;  // in cm

    // Calculate the volume of the cuboid
    float volume = height * width * length;

    // Display the result
    printf("The volume of the cuboid with dimensions:\n");
    printf("Height: %.2f cm\n", height);
    printf("Width: %.2f cm\n", width);
    printf("Length: %.2f cm\n", length);
    printf("Volume is: %.2f cubic cm\n", volume);

    return 0;
}

/*Output

The volume of the cuboid with dimensions:
Height: 10.00 cm
Width: 12.00 cm
Length: 8.00 cm
Volume is: 960.00 cubic cm


=== Code Execution Successful ===
*/
