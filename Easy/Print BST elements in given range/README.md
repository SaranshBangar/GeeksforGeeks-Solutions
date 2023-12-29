<h2><a href="https://www.geeksforgeeks.org/problems/print-bst-elements-in-given-range/1?page=2&category=Binary%20Search%20Tree&sortBy=submissions">Print BST elements in given range</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a Binary Search Tree<strong>&nbsp;</strong>and a range <strong>[low, high]</strong>. Find all&nbsp;the numbers&nbsp;in the BST that lie in the given range.<br>
<strong>Note:</strong> Element greater than or equal to root go to the right side.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp;17
 &nbsp; &nbsp; /&nbsp; &nbsp; \
 &nbsp; &nbsp;4&nbsp; &nbsp; &nbsp;18
 &nbsp;/&nbsp; &nbsp;\
 2&nbsp; &nbsp; &nbsp;9&nbsp;
l = 4, h = 24
<strong>Output: </strong>4 9 17 18&nbsp;</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp;16
 &nbsp; &nbsp; /&nbsp; &nbsp; \
 &nbsp; &nbsp;7&nbsp; &nbsp; &nbsp;20
 &nbsp;/&nbsp; &nbsp;\
 1&nbsp; &nbsp;&nbsp;10
l = 13, h = 23
<strong>Output: </strong>16 20<strong>&nbsp;
</strong></span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>printNearNodes()</strong>&nbsp;which takes the root Node of the BST and the range elements low and high as inputs and returns an array that contains the BST elements in the given range low to high (inclusive) in <strong>non-decreasing&nbsp;</strong>order.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(Height of the BST).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ Number of nodes ≤ 10<sup>4</sup><br>
1 ≤ l ≤ h ≤ 10<sup>5</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;