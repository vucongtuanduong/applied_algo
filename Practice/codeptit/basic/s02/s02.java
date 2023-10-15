import java.math.*;
import java.lang.*;
import java.util.*;
 
public class GFG {
 
    // function to calculate LCM of two large numbers
    public static BigInteger lcm(String a, String b)
    {
        // convert string 'a' and 'b' into BigInteger
        BigInteger s = new BigInteger(a);
        BigInteger s1 = new BigInteger(b);
 
        // calculate multiplication of two bigintegers
        BigInteger mul = s.multiply(s1);
 
        // calculate gcd of two bigintegers
        BigInteger gcd = s.gcd(s1);
 
        // calculate lcm using formula: lcm * gcd = x * y
        BigInteger lcm = mul.divide(gcd);
        return lcm;
    }
 
    // Driver Code
    public static void main(String[] args)
    {
 
        // Input 'a' and 'b' are in the form of strings because
        // they can not be handled by integer data type
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0) {
            String a;
            String b;
            
            a = sc.nextLine();
            b = sc.nextLine();
            
    
            System.out.print(lcm(a, b));
            System.out.println();
        }
        
    }
}
// Code contributed by Saurav Jain