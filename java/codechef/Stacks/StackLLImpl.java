//Implementing Stack using Linked list
class StackUsingLL {
    static class Nodes{
        int data;
        Nodes next;
        Nodes(int data){
          this.data = data;
        }
    }
    Nodes root;

    public boolean isEmpty(){
        if(this.root == null)
            return true;
        return false;
    }

    public int pop(){
        int value = -1;
        if(!isEmpty()){
            value = root.data;
            root = root.next;
        } else
          System.out.println("Stack Underflow");
        return value;
    }

    public void push(int data) {
      Nodes node = new Nodes(data);
      node.next = root;
      root = node;

    }

    public int peek(){
        if(!isEmpty())
          return root.data;
        System.out.println("Stack is Empty");
        return -1;
    }

    public void printStack(){
        Nodes iterator = root;
        while(iterator != null) {
          System.out.print(iterator.data);
          iterator = iterator.next;
        }
        System.out.println();
    }
}

public class StackLLImpl {
    public static void main(String[] args){
      StackUsingLL stk = new StackUsingLL();
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
      System.out.println("Deleted Element: "+stk.pop());
      System.out.println("Is Stack Empty: "+stk.isEmpty());
      System.out.println("Deleted Element: "+stk.pop());
    }
}
