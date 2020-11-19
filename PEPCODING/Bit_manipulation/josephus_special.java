import java.io.*;
import java.util.*;

public class Main {
    public static int helper(int n){
        int  i =1;
        while(2*i <= n) i*=2;
        return i;
    }
    
    public static int solution(int n){
        int p = helper(n);
        int h = n - p;
        return 2*h+1;
    }
    
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        System.out.println(solution(n));
    }
}