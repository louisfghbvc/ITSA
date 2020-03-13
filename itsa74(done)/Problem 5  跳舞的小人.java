//String problem, c++ stringstream judge error
import java.util.*;    
    
public class Main {    
    
    public static void main(String[] args) {    
        Scanner input = new Scanner(System.in);    
        int n = Integer.parseInt(input.nextLine());  
        while(n-- != 0){  
            String s[] = input.nextLine().split(" ");  
            StringBuilder str = new StringBuilder("");  
            int num = 0;  
            for(int i = s.length - 1; i >= 0; i--){  
                char c = s[i].toCharArray()[0];  
                if((c - '0') <= 9)  
                    num = Integer.parseInt(s[i]);  
                else{  
                    char t = (char)(c + num);
                    if(t > 'Z')
                          t = (char)(t % 'Z' + 'A' - 1);
                    str.append(t);  
                }  
            }  
            System.out.println(str.reverse());  
        }  
    }  
    /*...Java才給過G8 */  
}
/*
1
A B C 13 D E 2 X Y Z 20
*/
