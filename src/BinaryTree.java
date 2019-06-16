public class BinaryTree {

    Node root;

    /**
     * Recusrsive value
     * @param current
     * @param value
     * @return
     */
    private Node addRecursive(Node current, int value){
        // check the current node is empty and insert the value
        if (current == null){
            return new Node(value);
        }

        if (value < current.value){
            current.left = addRecursive(current.left, value);
        }else if (value > current.value){
            current.right = addRecursive(current.right, value);
        }else {
            // value already exist
            return current;
        }

        return current;
    }


    /**
     * add value to Binary tree
     * @param value
     */
    public void add(int value){
        root = addRecursive(root, value);
    }


    public boolean containsNode(int value){
        return containsNodeRecusrive(root, value);
    }

    private boolean containsNodeRecusrive(Node current, int value) {
        if (current == null) {
            return false;
        }

        if (value == current.value){
            return true;
        }

        return value < current.value
                ? containsNodeRecusrive(current.left, value)
                : containsNodeRecusrive(current.right, value);
    }



    private Node deleteRecursive(Node current, int value){
        if (current == null){
            return null;
        }

        if (current.value == value){
            // delete the node
            if (current.left == null && current.right == null){
                return null;
            }

            if (current.left == null){
                return current.right;
            }

            if (current.right == null){
                return current.left;
            }
        }

        if (value < current.value){
            current.left = deleteRecursive(current.left, value);
            return current;
        }else{
            current.right = deleteRecursive(current.right, value);
            return current;
        }
    }


    public void delete(int value){
        root = deleteRecursive(root, value);
    }


}

