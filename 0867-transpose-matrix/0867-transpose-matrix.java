class Solution {
    public int[][] transpose(int[][] mat) {
        int row = mat.length;
        int cols = mat[0].length;

        int[][] result = new int[cols][row];

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < cols; j++) {
                result[j][i] = mat[i][j];
            }
        }

        return result;
    }
}