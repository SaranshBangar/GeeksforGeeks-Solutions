<h2><a href="https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/1?page=1&difficulty=Basic,Easy,Medium&status=unsolved&sortBy=latest">Flatten BST to sorted list</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You have a <strong>Binary Search Tree (BST)</strong>. The goal is to rearrange its elements in increasing order such that, the left side of each element points to nothing <strong>(NULL),</strong> and the right side points to the next element in the list (elements in sorted order). Also, each element should have a value smaller than all the elements on its right side. You need to do this without using any extra storage to help you (Recursive call stack is allowed).</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong>
<span style="font-size: 18px;">          5
        /   \
       3     7
      / \   / \
     2   4 6   8</span>
<strong><span style="font-size: 18px;">Output: </span></strong><span style="font-size: 18px;">2 3 4 5 6 7 8</span>
<strong><span style="font-size: 18px;">Explanation: </span></strong>
<span style="font-size: 18px;">After flattening, the tree looks
like this
    2
     \
      3
       \
        4
         \
          5
           \
            6
             \
              7
               \
                8
Here, left of each node points
to NULL and right contains the
next node.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong>
<span style="font-size: 18px;">       5
        \
         8
       /   \
      7     9  </span>
<span style="font-size: 18px;"><strong>Output:</strong> 5 7 8 9</span>
<span style="font-size: 18px;"><strong>Explanation:</strong>
After flattening, the tree looks like this:</span>
<span style="font-size: 18px;">   5
    \
     7
      \
       8
        \
         9</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>flattenBST()&nbsp;</strong>which takes <strong>root node </strong>of the <strong>BST</strong> as input parameter and returns the root node after transforming the tree.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of nodes &lt;= 10<sup>3</sup><br>1 &lt;= Data of a node &lt;= 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;