<h2><a href="https://www.geeksforgeeks.org/problems/sum-of-k-smallest-elements-in-bst3029/1?page=2&category=Binary%20Search%20Tree&sortBy=submissions">Sum of k smallest elements in BST</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p>&nbsp;<span style="font-size:18px">Given a Binary Search Tree. Find sum of all elements smaller than and&nbsp;equal to Kth smallest element.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
          20
        /    \
       8     22
     /    \
    4     12
         /    \
        10    14   , K=3

<strong>Output:</strong> 22
<strong>Explanation:</strong>
Sum of 3 smallest elements are: 
4 + 8 + 10 = 22</span></pre>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input:</strong>
     10
&nbsp;   /  \
&nbsp;  5    11
&nbsp; / \ 
&nbsp;4   7
&nbsp;     \
&nbsp;      8 , K=2

<strong>Output:</strong> 9
<strong>Explanation:</strong>
The sum of two smallest elements 
is 4+5=9.</span></pre>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Your task:</strong></span></div>

<div><span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function <strong>sum() </strong>which takes the <strong>root node</strong> and an <strong>integer K</strong> as input parameters and returns the sum of all elements smaller than and&nbsp;equal to kth&nbsp;smallest element.</span></div>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(K)</span></div>

<div><span style="font-size:18px"><strong>Expected Auxiliary Space:</strong> O(1)</span></div>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=Number of nodes in BST&lt;=100<br>
1&lt;=K&lt;=N</span></div>

<p>&nbsp;&nbsp;</p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;