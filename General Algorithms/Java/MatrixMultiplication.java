public class  MatrixMultiplication {

    // Function to multiply two matrices
    public static int[][] multiplyMatrices(int[][] A, int[][] B) {
        int m = A.length;    // Number of rows in A
        int n = A[0].length; // Number of columns in A
        int p = B[0].length; // Number of columns in B

        int[][] result = new int[m][p];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < p; j++) {
                for (int k = 0; k < n; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        return result;
    }

    // Function to print a matrix
    public static void printMatrix(int[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        // Define matrices A and B
        int[][] A = { {1, 2}, {3, 4} };
        int[][] B = { {5, 6}, {7, 8} };

        // Perform matrix multiplication
        int[][] result = multiplyMatrices(A, B);

        // Display the result
        System.out.println("Resultant Matrix:");
        printMatrix(result);
    }
}
