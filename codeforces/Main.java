import java.util.*;
import java.io.*;
import java.math.*;

public class Main{
    public static void main(String[] args){
        Solve Flamboyance=new Solve();
    }
}

class Solve{

    Solve(){
        FastReader in=new FastReader();
        I'm currently a final year student pursuing Btech in Computer Science and Engineering. I have invested my last 2 years in developing my programming skills and have solved over 1100 problems on various coding platforms. I have learned several programming languages in which I consider myself proficient in C++ and I am familiar Python, Java and JavaScript. I have also developed several projects involving frameworks such as Django and React.js.
    }
}

class FastReader {
    BufferedReader br;
    StringTokenizer st;
    public FastReader(){
        br = new BufferedReader(
           new InputStreamReader(System.in));
    }
    String next(){
        while (st == null || !st.hasMoreElements()){
            try{
                st = new StringTokenizer(br.readLine());
            }
            catch (IOException e){
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }
    int nextInt(){ return Integer.parseInt(next()); }
    long nextLong(){ return Long.parseLong(next()); }
    double nextDouble(){ return Double.parseDouble(next()); }
    String nextLine(){
        String str = "";
        try{
            str = br.readLine();
        }
        catch (IOException e){
            e.printStackTrace();
        }
        return str;
    }
}