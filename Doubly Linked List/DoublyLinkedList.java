public class DoublyLinkedList {

    class Node{
        int data;
        Node prev;
        Node next;

        Node(int data){
            this.data = data;
        }
    }

    Node head, tail = null;

    void addNode(int data){
        Node node = new Node(data);

        if (head == null){
            // list is empty, create a new list
            node.prev = null;
            node.next = null;
            head = tail = node;
        }else{
            // list is not empty, append a new node
            // null<-10->|<-20->null
            tail.next = node;
            node.prev = tail;
            tail = node;
            tail.next = null;
        }
    }


    void display(){
        Node current = head;
        if (head == null){
            System.out.println("Doubly Linked list is empty.");
            return;
        }

        while (current != null){
            System.out.print(current.data + " ");
            current = current.next;
        }
    }


    /**
     *              INSERT NODE AT THE BEGINNING!
     * ==============================================================
     */
    void insertAtBeginning(int data){
        // creating a new node
        Node temp = new Node(data);
        // if list is empty. insert the first node.
        if (head == null){
            // insert the node;
            temp.prev = null;
            temp.next = null;
            head = tail = temp;
            return;
        }

        // if list is not empty and insert at the beginning
        temp.next = head;
        temp.prev = null;
        head.prev = temp;
        head = temp;
    }

    void insertAtPosition(int data, int pos){
        Node temp = new Node(data);
        Node current = head;

        for (int i = 0; i <pos; i++){
            current = current.next;

            // 1->|<-2->|____|<-3->      temp: <-4->
            temp.prev = current;
            temp.next = current.next;
            if (current.next != null){
                current.next.prev = temp;
            }
            current.next = temp;
        }
    }



    /**
     *              DELETE FROM THE DOUBLY LINKEDLIST
     * ==============================================================
     */
    void deleteFromBeginning(){
        // check whether list is empty
        if (head == null) return;

        // if only one item in the list
        if (head == tail) head = tail = null;

        Node temp = head;
        head = head.next;
        if (head != null) head.prev = null;
    }


    void deleteFromPosition(int index){
        Node curr = head;

        if (index < 1) return;
        if (index == 1){
            // first item
            head = head.next;
            if (head != null) head.prev = null;
        }else{
            // any item from the list;
            for (int i = 0; i < index-1 ; i++){
                curr = curr.next;
                curr.prev.next = curr.next;
                if (curr.next != null)
                    curr.next.prev = curr.prev;

            }
        }

        //
        // null<-10->|<-20->|<-30->|<-40->null
    }





    void reverse(){
        Node curr = head;
        while(curr != null){
            Node temp = curr.next;
            curr.next = curr.prev;
            curr.prev = temp;

            curr = curr.prev;

            if (curr != null && curr.next == null ){
                head = curr;
            }
        }
    }



}


class Main{
    public static void main(String[] args) {
        // create doubly linkedlist
        DoublyLinkedList list = new DoublyLinkedList();
        list.addNode(10);
        list.addNode(20);
        list.addNode(30);
        list.addNode(40);
        list.addNode(50);

        //list.insertAtBeginning(5);
        list.deleteFromPosition(4);

//        list.reverse();


        // print all the node
        list.display();
    }
}
