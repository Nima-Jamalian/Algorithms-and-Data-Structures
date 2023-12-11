public class MatrixMultiplication {
    public static int[][] multiplyMatrices(int[][] matrixA, int[][] matrixB) {
        // Check if the matrices can be multiplied
        if (matrixA[0].length != matrixB.length) {
            throw new IllegalArgumentException("Number of columns in Matrix A must be equal to the number of rows in Matrix B");
        }

        int rowsA = matrixA.length;
        int colsA = matrixA[0].length;
        int colsB = matrixB[0].length;

        // Initialize the result matrix with zeros
        int[][] resultMatrix = new int[rowsA][colsB];

        // Perform matrix multiplication
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsB; j++) {
                for (int k = 0; k < colsA; k++) {
                    resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
                }
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
            {4, 5, 6}
        };

        int[][] matrixB = {
            {7, 8},
            {9, 10},
            {11, 12}
        };

        // Calculate the product of matrices
        int[][] resultMatrix = multiplyMatrices(matrixA, matrixB);

        // Display the matrices
        System.out.println("Matrix A:");
        printMatrix(matrixA);

        System.out.println("\nMatrix B:");
        printMatrix(matrixB);

        System.out.println("\nProduct of Matrices:");
        printMatrix(resultMatrix);
    }
}
