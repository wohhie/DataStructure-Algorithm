import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class BinaryTree {
    Node root;

    private void iterativePreOrder(Node node) {
        if (node == null) return;
        // create an empty stack and push root to it
        Stack<Node> stack = new Stack<>();

        while (node != null || !stack.isEmpty()){
            if (node != null){
                System.out.print(node.data + " ");
                stack.push(node);
                node = node.left;
            }else{
                node = stack.pop();
                node = node.right;
            }
        }
    }


    private void iterativeInOrder(Node node){
        // we are going to the left most item
        if (node == null) return;
        // create an empty stack and push root to it.
        Stack<Node> stack = new Stack<>();

        while (node != null || !stack.isEmpty()){
            // 1. inOrder(left_child)   // put the data into stack
            // 2. Print(node.data)
            // 3. inOrder(right_child)
            if (node != null){
                stack.push(node);
                node = node.left;
            }else{
                node = stack.pop();
                System.out.print(node.data + " ");
                node = node.right;
            }
        }
    }


    private void levelOrder(Node node){
        // 1. print the root data
        // 2. insert root address in queue
        // 3. while queue is not empty
        //      a. get the address of the queue
        //      check left child has data
        //          i. print the left child data
        //          j. insert data of left child
        //      else check right child has data
        //          i. print the right child data
        //          j. insert data of the right child
        //      timecomplexity = o(n)
        //      spacecomplexity = o(n)

        Queue<Node> queue = new LinkedList<>();
        System.out.print(node.data + " ");
        queue.add(node);

        while (!queue.isEmpty()){
            node = queue.remove();
            if (node.left != null){
                System.out.print(node.left.data + " ");
                queue.add(node.left);
            }

            if(node.right != null){
                System.out.print(node.right.data + " ");
                queue.add(node.right);
            }
        }
    }



    private int count_who_have_both_children(Node node){
        int x, y;
        if (node != null){
            x = count_who_have_both_children(node.left);
            y = count_who_have_both_children(node.right);
            if (node.left != null && node.right != null){
                return x + y + 1;
            }else {
                return x + y;
            }
        }
        return 0;
    }


    private int sum_tree_data(Node node){
        int x, y;
        if (node != null){
            x = sum_tree_data(node.left);
            y = sum_tree_data(node.right);
            return x + y + node.data;
        }

        return 0;
    }


    private int treeHeight(Node node){
        int x, y;
        if (node != null){
            x = treeHeight(node.left);
            y = treeHeight(node.right);

            return (x > y) ?  x + 1 : y + 1;
        }
        return 0;
    }


    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);

        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);


//        tree.iterativePreOrder(tree.root);
//        System.out.println();
//        tree.iterativeInOrder(tree.root);



        tree.levelOrder(tree.root);
        System.out.println();
        System.out.println("Count: " + tree.count_who_have_both_children(tree.root) + " Nodes");
        System.out.println("Sum: " + tree.sum_tree_data(tree.root));
        System.out.println("Height: " + tree.treeHeight(tree.root));



    }

}
