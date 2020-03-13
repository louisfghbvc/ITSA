//String problem, c++ stringstream judge error
import java.util.*;    
    
public class Main {    
    
    public static void main(String[] args) {    
        Scanner scn = new Scanner(System.in);    
        int n = Integer.parseInt(scn.nextLine());  
        while(n-- != 0){  
            String s[] = scn.nextLine().split(" ");  
            StringBuilder str = new StringBuilder("");  
            int num = 0;  
            for(int i = s.length-1; i >= 0; i--){  
                char c = s[i].toCharArray()[0];  
                if((c - '0') <= 9)  
                    num = Integer.parseInt(s[i]);  
                else{  
                    char tot=(char)(c+num);  
                    if(tot > 'Z')  
                        tot = (char)( tot % 'Z' + 'A' - 1);  
                    str.append(tot);  
                }  
            }  
            System.out.println(str.reverse());  
        }  
    }  
    /*...Java才給過G8 */  
} 
