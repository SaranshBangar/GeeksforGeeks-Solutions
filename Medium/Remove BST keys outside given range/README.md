<h2><a href="https://www.geeksforgeeks.org/problems/remove-bst-keys-outside-given-range/1?page=1&category=Sorting,Stack,Binary%20Search%20Tree,Binary%20Search&difficulty=Easy,Medium&status=unsolved&sortBy=accuracy">Remove BST keys outside given range</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a Binary Search Tree (BST) and a range [min, max], remove all keys which are outside the given range. The modified tree should also be BST.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">Range = [-10, 13]</span>
<span style="font-size:18px"><img alt="Lightbox" src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/BinaryTree14.png" style="height:170px; width:170px"></span>
<strong><span style="font-size:18px">Output:</span></strong>
<span style="font-size:18px">-8 6 7 13</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">Nodes with values -13, 14 and 15 are 
outside the given range </span><span style="font-size:18px">and hence are 
removed from the BST.</span>

<span style="font-size:18px"><img alt="BinaryTreeModified2" src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/BinaryTreeModified2.png" style="height:140px; width:170px"></span>
<span style="font-size:18px">This is the resultant BST and it's 
inorder traversal is -8 6 7 13.
</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">Range = [2, 6]
        14
      /    \
     4      16
    / \     /
   2   8   15
  / \  / \
 -8  3 7  10</span>
<strong><span style="font-size:18px">Output:
</span></strong><span style="font-size:18px">2 3 4</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">After removing nodes outside the range, 
the resultant BST looks like:
               4
              /
             2
              \
                3 
The inorder traversal of this tree is: 2 3 4</span>
</pre>

<div><strong><span style="font-size:18px">Your task:</span></strong></div>

<div><span style="font-size:18px">You don't have to read input or print anything. Your task is to complete the function <strong>removekeys()</strong> which takes the root node of the BST and the range as input and returns the root of the modified BST after removing the nodes outside the given range.</span></div>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(number of nodes)</span></div>

<div><span style="font-size:18px"><strong>Expected Auxiliary Space:</strong> O(h)</span></div>

<div>&nbsp;</div>

<div><strong><span style="font-size:18px">Constraints:</span></strong></div>

<div><span style="font-size:18px">1 ≤ Number of Nodes ≤ 10<sup>5</sup><br>
1 ≤ K ≤ 10<sup>5</sup></span></div>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;