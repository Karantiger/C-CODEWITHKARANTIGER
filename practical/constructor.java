public class constructor {
    public static class AreaCalculator {
        private int length;
        private int breadth;

        // Default constructor
        public AreaCalculator() {
            this.length = 2; // Default length for square
            this.breadth = 2; // Default breadth for square
        }

        // Parameterized constructor
        public AreaCalculator(int length, int breadth) {
            this.length = length;
            this.breadth = breadth;
        }

        // Method to calculate the area of a rectangle
        public int calculateRectangleArea() {
            return length * breadth;
        }

        // Method to calculate the area of a square
        public int calculateSquareArea() {
            return length * length;
        }
    }

    public static void main(String[] args) {
        // Create a square using the default constructor
        AreaCalculator square = new AreaCalculator();
        System.out.println("Square area: " + square.calculateSquareArea());

        // Create a rectangle with specific dimensions (e.g., 4 and 5)
        AreaCalculator rectangle = new AreaCalculator(4, 5);
        System.out.println("Rectangle area: " + rectangle.calculateRectangleArea());
    }
}