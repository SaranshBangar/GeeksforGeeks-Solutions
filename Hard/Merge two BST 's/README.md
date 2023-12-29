<h2><a href="https://www.geeksforgeeks.org/problems/merge-two-bst-s/1?page=2&category=Binary%20Search%20Tree&sortBy=submissions">Merge two BST 's</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two BSTs, return elements of both BSTs in <strong>sorted </strong>form.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
BST1:
       </strong>5
&nbsp;    /   \
&nbsp;   3     6
&nbsp;  / \
&nbsp; 2   4  <strong>
</strong><strong>BST2:
&nbsp;       </strong>2
&nbsp;     /   \
&nbsp;    1     3
&nbsp;           \
&nbsp;            7
&nbsp;           /
&nbsp;          6
<strong>Output: </strong>1 2 2 3 3 4 5 6 6 7<strong>
Explanation: 
</strong>After merging and sorting the
two BST we get 1 2 2 3 3 4 5 6 6 7.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
BST1:
&nbsp;      </strong>12
&nbsp;    /   
&nbsp;   9
&nbsp;  / \ &nbsp;  
&nbsp; 6   11<strong>
</strong><strong>BST2:
&nbsp;     </strong>8
&nbsp;   /  \
&nbsp;  5    10
&nbsp; /
&nbsp;2
<strong>Output: </strong>2 5 6 8 9 10 11 12<strong>
Explanation: 
</strong>After merging and sorting the
two BST we get 2 5 6 8 9 10 11 12.</span></pre>

<p><br>
<strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size:18px"><strong> merge() </strong>which takes roots of both the BSTs as its input and returns an array of integers denoting the node values of both the BSTs in a sorted order.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(M+N) where M and N are the sizes of the two BSTs.<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of BST1 + Height of BST2 + M + N(for storing the answer)).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ Number of Nodes ≤ 10<sup>5</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;