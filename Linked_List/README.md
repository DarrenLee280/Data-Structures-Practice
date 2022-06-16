# Linked List

<p> A linked list consists of nodes where each node contains data and a link to the next node. </p>
<p> There is a head pointer that links to the start of the linked list and sometimes there is a tail that points to the end of the list.</p> 

## Types of Linked List
<ol>
    <li>Singly Linked List</li>
    <li>Doubly Linked List</li>
    <li>Circular Linked List</li>
    <li>Circular Doubly Linked List</li>
</ol>

### Singly Linked List
<p> A <b>Singly Linked List</b> is a list you can only traverse in one direction... Head to Tail. Each node contains only data and a link to the next pointer. </p>
<p>head->data->...</p>

### Doubly Linked List
<p> A Doubly Linked List is a bi-directional list meaning you can traverse in 2 directions. Each node will have data along with a next and previous pointer.</p>
<p> head->data<-->data2<-->...

### Circular Linked List
<p> A Circular Linked List is similar to a singly linked list except the tail refers back to the head node.</p>
<p>head->data1->data2->tail->head->data1->data2->...</p>


### Circular Doubly Linked List
<p> A Circular Doubly Linked List is similar to a doubly linked list except the tail refers back to the head node.</p>
<p>head->data1<-->data2<-->tail<-->head<-->data1<-->data2<-->...</p>

## Linked List Analysis
<p> This is analysis for Linked List Assuming that each is implemented with head and tail </p>

| Analysis | Access | Search | Insertion | Deletion |
| -------- | ------ | ------ | --------- | -------- |
| Singly Linked List | O(n) | O(n) | O(1) | O(1) |
| Doubly Linked List | O(n) | O(n) | O(1) | O(1) |