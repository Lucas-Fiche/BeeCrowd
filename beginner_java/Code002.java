package beginner_java;

import java.io.IOException;
import java.util.Scanner;
 
public class Code002 {
 
    public static void main(String[] args) throws IOException {
 
       int A;
       int B;
       int X;
       
       Scanner leitura = new Scanner(System.in);
       
       A = leitura.nextInt();
       B = leitura.nextInt();
       X = A + B;

       System.out.println("X = %d".formatted(X));
        leitura.close();
    }
 
}
