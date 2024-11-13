// write a program in which define constant using final keyword to find out area of cylinder in java code

public class CylinderAreaCalculator {
  // Defining constants
  private static final double PI = 3.14159;
  
  // Method to calculate surface area of a cylinder
  public static double calculateSurfaceArea(double radius, double height) {
    return 2 * PI * radius * (height + radius);
}

  public static void main(String[] args) {
      // Static inputs for radius and height
      double radius = 5.0;  // Example radius
      double height = 10.0; // Example height

      // Calculate surface area
      double surfaceArea = calculateSurfaceArea(radius, height);

      // Output the result
      System.out.printf("The surface area of the cylinder with radius %.2f and height %.2f is: %.2f\n", radius, height, surfaceArea);
  }
}