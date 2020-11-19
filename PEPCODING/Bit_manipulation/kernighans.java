import java.io.*;
import java.util.*;

public class Main {

  public static void main(String[] args){
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();

    int rsb = (n & -n), ans = 0;
    while(rsb != 0 ){
        n -= rsb;
        ans++;
        rsb = (n & -n);
    }
    System.out.println(ans);
  }

}