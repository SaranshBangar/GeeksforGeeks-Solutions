<h2><a href="https://www.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1?page=1&difficulty=Medium&status=unsolved&sortBy=accuracy">Flatten binary tree to linked list</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given the root of a binary tree, flatten the tree into a "lLinked list":</span></p>
<ul>
<li><span style="font-size: 18px;">The "linked list" should use the same Node class where the right child pointer points to the next node in the list and the left child pointer is always null.</span></li>
<li><span style="font-size: 18px;">The "linked list" should be in the same order as a pre-order traversal of the binary tree.</span></li>
</ul>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input : </strong>
          1
        /   \
       2     5
      / \     \
     3   4     6</span>
<span style="font-size: 18px;"><strong>Output :</strong>
1 2 3 4 5 6 
<strong>Explanation: </strong>
After flattening, the tree looks 
like this
    1
     \
      2
       \
        3
         \
          4
           \
            5
             \
              6 
Here, left of each node points 
to NULL and right contains the 
next node in preorder.The inorder 
traversal of this flattened tree 
is 1 2 3 4 5 6.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong>
        1
       / \
      3   4
         /
        2
         \
          5 
<strong>Output :</strong> 
1 3 4 2 5  
<strong>Explanation : </strong>
After flattening, the tree looks 
like this 
     1
      \
       3
        \
         4
          \
           2
            \ 
             5 
Here, left of each node points 
to NULL and right contains the 
next node in preorder.The inorder 
traversal of this flattened tree 
is 1 3 4 2 5.</span></pre>
<div><strong><span style="font-size: 18px;">Your task:</span></strong></div>
<div><span style="font-size: 18px;">You don't have to read input or print anything. Your task is to complete the function flatten() which takes the root of the tree and flattens the tree into a linked list without using any auxiliary space.</span></div>
<div><span style="font-size: 18px;">Note: The driver code prints the in-order traversal of the flattened binary tree.</span></div>
<div>&nbsp;</div>
<div><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(n)</span></div>
<div><span style="font-size: 18px;"><strong>Expected Auxiliary Space:</strong> O(1)</span></div>
<div>&nbsp;</div>
<div><strong><span style="font-size: 18px;">Constraints :</span></strong></div>
<div><span style="font-size: 18px;">1&lt;=n&lt;=10^5</span></div>
<div>&nbsp;</div></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;