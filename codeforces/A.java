import java.util.*;
import java.io.*;
import java.math.*;

public class A{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int T=in.nextInt();
        while(T-->0){
            int n=in.nextInt();
            int ar[]=new int[n];
            Map<Integer,Integer> mp=new TreeMap<Integer,Integer>();
            for(int i=0; i<n; i++){
                ar[i]=in.nextInt();
                mp.put(ar[i],i);
            }
            int q=in.nextInt(),rev=0;
            while(q-->0){
                int a=in.nextInt(),i=in.nextInt(),j=in.nextInt();
                if(a==1)
                    rev^=1;
                else if(a==2){
                    i--;
                    j--;
                    int t=ar[j],r=ar[i];
                    if(rev==1){
                        t=ar[n-j-1];
                        r=ar[n-i-1];
                        mp.remove(t);
                        mp.remove(r);
                        mp.put(r,n-j-1);
                        mp.put(t,n-i-1);
                        ar[n-i-1]=t;
                        ar[n-j-1]=r;
                    }
                    else{
                        mp.remove(t);
                        mp.remove(r);
                        mp.put(r,j);
                        mp.put(t,i);
                        ar[i]=t;
                        ar[j]=r;
                    }

                }
                else{
                    int inx=mp.get(i);
                    System.out.println((rev==1 ? n-inx : inx+1));
                }
            }
        }
    }
}
