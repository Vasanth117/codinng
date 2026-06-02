import java.util.Scanner;
public class matrix {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m,n;
        System.out.println("Enter the number of rows and columns:");
        m = sc.nextInt();
        n = sc.nextInt();
        int[][] matrix = new int[m][n];
        System.out.println("Enter the elements of the matrix:");
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                matrix[i][j] = sc.nextInt();
            }
        }
        System.out.println("The matrix is:");
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}