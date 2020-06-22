//implementing stacks using Arrays

class StackUsingArray {

    int size = 100;
    int top = -1;
    int[] stackArr = new int[size];

    public boolean isEmpty(){
      if(this.top == -1)
        return true;
      return false;
    }

    public boolean isFull(){
        if(this.top == this.size)
          return true;
        return false;
    }

    public int peek() {
      if(!isEmpty())
        return stackArr[this.top];
      System.out.println("Stack is Empty");
      return -1;
    }

    public int pop(){
        int value = -1;
        if(!isEmpty()) {
            value = stackArr[this.top];
            stackArr[this.top--] = 0;
        } else
            System.out.println("Stack Underflow");
        return value;
    }

    public int push(int value){
        if(!isFull()){
            stackArr[++this.top] = value;
        } else
            System.out.println("Stack Overflow");
        return this.top;
    }

    public void printStack(){
      int cap = this.top;
      while(cap > -1)
        System.out.print(stackArr[cap--]+" ");
      System.out.println();
    }
}

public class StackArrayImpl {
    public static void main(String[] args) {
        StackUsingArray stk = new StackUsingArray();
        //push 5
        stk.push(5);
        //push 6
        stk.push(6);
        //push 4
        stk.push(4);
        stk.printStack();
        System.out.println("Deleted Element: "+stk.pop());
        System.out.println("Top Element: "+stk.peek());
        System.out.println("Deleted Element: "+stk.pop());
        System.out.println("Is Stack Empty: "+stk.isEmpty());
        System.out.println("Is Stack Full: "+stk.isFull());
        System.out.println("Deleted Element: "+stk.pop());
        System.out.println("Is Stack Empty: "+stk.isEmpty());
        System.out.println("Deleted Element: "+stk.pop());
    }
}
