//chemical formula
import java.util.*;

class ChemicalFormula {

  public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      String formula = sc.nextLine();
      int mass = 0;
      int current = 0;
      Stack<Integer> grp = new Stack<>();
      for(int i = 0; i < formula.length(); i++){
        if(Character.isAlphabetic(formula.charAt(i)))
          switch(formula.charAt(i)){
            case 'H': grp.push(1); break;
            case 'O': grp.push(16); break;
            case 'C': grp.push(12); break;
          }
        if(Character.isDigit(formula.charAt(i))){
          grp.push(grp.pop() * Character.getNumericValue(formula.charAt(i)));
        }
        if(formula.charAt(i) == '(')
          grp.push(-1);
        if(formula.charAt(i) == ')') {
            int sum = 0;
            while(grp.peek() != -1){
              sum += grp.pop();
            }
            grp.pop();
            grp.push(sum);
        }
      }
      int size = grp.size();
      for(int i = 0; i < size; i++)
          mass += grp.pop();
      System.out.println(mass);
  }
}
