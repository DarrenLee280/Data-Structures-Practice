#Contains the common class that all implementations use.

#Node class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

#Linked List Class
class linked_list:
    def __init__(self):
        self.head = None

    def add_node(self, node):
        #if list is empty
        if self.head == None:
            node.next = self.head 
            self.head = node
        #if the head is the one to switch
        elif self.head.data >= node.data:
            node.next = self.head
            self.head = node
        else:
            current = self.head
            while (current.next is not None and current.next.data < node.data):
                current = current.next
    
            node.next = current.next
            current.next = node


    def print_list(self):
        current = self.head
        print('head->',end="")
        while current != None:
            print(f"{current.data}->",end="")
            current = current.next
        print("None")

#Testing
def main():
    list = linked_list()
    new_node = Node(5)
    list.add_node(new_node)
    list.print_list()

    new_node = Node(10)
    list.add_node(new_node)
    list.print_list()

    new_node = Node(7)
    list.add_node(new_node)
    list.print_list()

    new_node = Node(3)
    list.add_node(new_node)
    list.print_list()

    new_node = Node(1)
    list.add_node(new_node)
    list.print_list()

    new_node = Node(9)
    list.add_node(new_node)
    list.print_list()

if __name__ == "__main__":
    main()