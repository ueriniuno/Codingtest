import java.util.Scanner;
import java.util.Arrays;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] a = new int[N];
        for (int i=0; i<N; i++){
            a[i]=sc.nextInt();
        }
        Arrays.sort(a);
        
        int M = sc.nextInt();

        for (int i=0; i<M; i++){
            int b=sc.nextInt();
            int ans=0;
            int start=0;
            int end=N-1;
            while(start<=end){
                int mid=(start+end)/2;
                if(a[mid]==b){
                    ans=1;
                    break;
                }
                if(a[mid]<b) start=mid+1;
                else end=mid-1;
            }
            System.out.println(ans);
        }
        
    }
    
}