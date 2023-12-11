public class MatrixAddition {
    public static int[][] addMatrices(int[][] matrixA, int[][] matrixB) {
        // Check if the matrices have the same dimensions
        if (matrixA.length != matrixB.length || matrixA[0].length != matrixB[0].length) {
            throw new IllegalArgumentException("Matrices must have the same dimensions for addition");
        }

        int rows = matrixA.length;
        int columns = matrixA[0].length;

        // Initialize a result matrix with zeros
        int[][] resultMatrix = new int[rows][columns];

        // Perform matrix addition
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
            }
        }

        return resultMatrix;
    }

    public static void printMatrix(int[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        // Example matrices
        int[][] matrixA = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        int[][] matrixB = {
            {9, 8, 7},
            {6, 5, 4},
            {3, 2, 1}
        };

        // Calculate the sum of matrices
        int[][] resultMatrix = addMatrices(matrixA, matrixB);

        // Display the matrices
        System.out.println("Matrix A:");
        printMatrix(matrixA);

        System.out.println("\nMatrix B:");
        printMatrix(matrixB);

        System.out.println("\nSum of Matrices:");
        printMatrix(resultMatrix);
    }
}
