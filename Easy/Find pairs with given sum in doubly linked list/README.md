<h2><a href="https://www.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1?page=3&difficulty=School,Basic,Easy&status=unsolved&sortBy=latest">Find pairs with given sum in doubly linked list</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a sorted doubly linked list of positive distinct elements, the task is to find pairs in a doubly-linked list whose sum is equal to given value <strong>target</strong>.</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:  </strong></span>
<span style="font-size:18px">1 &lt;-&gt; 2 &lt;-&gt; 4 &lt;-&gt; 5 &lt;-&gt; 6 &lt;-&gt; 8 &lt;-&gt; 9</span>
<span style="font-size:18px">target = 7</span>
<span style="font-size:18px"><strong>Output: </strong>(1, 6), (2,5)</span>
<span style="font-size:18px"><strong>Explanation: </strong>We can see that there are two pairs </span>
<span style="font-size:18px">(1, 6) and (2,5) with sum 7.</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input: </span></strong>
<span style="font-size:18px">1 &lt;-&gt; 5 &lt;-&gt; 6</span>
<span style="font-size:18px">target = 6</span>
<strong><span style="font-size:18px">Output: </span></strong><span style="font-size:18px">(1,5)
<strong>Explanation: </strong>We can see that there is one pairs </span> <span style="font-size:18px">(1, 5) with sum 6.
</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>findPairsWithGivenSum()&nbsp;</strong>which takes head node of the doubly linked list and an integer target&nbsp;as input parameter and returns an array of pairs. If there is no such pair&nbsp;return&nbsp;empty array.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)<br>
<strong>Constraints:</strong><br>
1 &lt;= N&nbsp;&lt;= 10<sup>5</sup><br>
1 &lt;= target&nbsp;&lt;= 10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>doubly-linked-list</code>&nbsp;<code>two-pointer-algorithm</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;