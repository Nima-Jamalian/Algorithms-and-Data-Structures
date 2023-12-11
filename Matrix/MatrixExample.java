public class MatrixExample {
    public static void main(String[] args) {
        // Define a 2x3 matrix (2 rows, 3 columns)
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6}
        };

        // Get the number of rows and columns in the matrix
        int rows = matrix.length;
        int columns = matrix[0].length;

        // Iterate through each row and column to print the elements
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println(); // Move to the next line after printing each row
        }
    }
}
