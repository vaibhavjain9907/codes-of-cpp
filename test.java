// Node class for Doubly Linked List
class Node {
    int data;
    Node prev; // Reference to previous node
    Node next; // Reference to next node

    Node(int data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}