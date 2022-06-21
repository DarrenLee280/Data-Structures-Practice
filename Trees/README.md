# Binary Search Tree

<p> Binary Search Tree is a node-based binary tree which has the following properties: </p>

<ul>
    <li>The left subtree of the a node only contains nodes with lesser value keys than the node's key</li>
    <li>The right subtree of the a node only contains nodes with greater value keys than the node's key</li>
    <li>Both the right and left subtree must be a binary search tree</li>
</ul>

## Example Binary Search Tree
<img src="BinarySearchTreeExample.JPG" alt="Binary Search Tree Example">

## O-Notation
<p> h is the height of the tree and n is the number of nodes</p>

| Analysis | Search | Insertion | Deletion |
| -------- | ------ | --------- | -------- |
| Binary Search Tree | O(h) | O(h) | O(h) |
| AVL Tree | O(ln(n)) | O(ln(n)) | O(ln(n)) |

### Binary Search Tree
<p>Search: When searching, the worse case is when you have to traverse all nodes to search the tree</p>
<p>Insertion: When insertion, the worse case is when you have to traverse all nodes to insert</p>
<p>Search: When deletion, the worse case is when you have to traverse all nodes to find the node to delete</p>