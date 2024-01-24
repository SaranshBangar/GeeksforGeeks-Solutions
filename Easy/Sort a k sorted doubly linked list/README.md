<h2><a href="https://www.geeksforgeeks.org/problems/sort-a-k-sorted-doubly-linked-list/1?page=1&sortBy=latest">Sort a k sorted doubly linked list</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a doubly linked list containing <strong>N nodes</strong>, where each node is at most <strong>K-</strong>indices away from its <strong>target position</strong> in the list</span><span style="font-size: 18px;">. The problem is to sort the given doubly linked list. The distance can be assumed in either of the directions (left and right).</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:  </strong>3 &lt;-&gt; 2 &lt;-&gt; 1 &lt;-&gt; 5 &lt;-&gt; 6 &lt;-&gt; 4</span>
<span style="font-size: 18px;">K = 2<strong>
Output: </strong>1 &lt;-&gt; 2 &lt;-&gt; 3 &lt;-&gt; 4 &lt;-&gt; 5 &lt;-&gt; 6<strong>
Explanation: </strong></span><span style="font-size: 18px;">
After sorting the given 2 sorted</span><span style="font-size: 18px;">
list is 1 &lt;-&gt; 2 &lt;-&gt; 3 &lt;-&gt; 4 &lt;-&gt; 5 &lt;-&gt; 6.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong></span><span style="font-size: 18px;">5 &lt;-&gt; 6 &lt;-&gt; 7 &lt;-&gt; 3 &lt;-&gt; 4 &lt;-&gt; 4</span>
<span style="font-size: 18px;">K = 3<strong>
Output: </strong>3 &lt;-&gt; 4 &lt;-&gt; 4 &lt;-&gt; 5 &lt;-&gt; 6 &lt;-&gt; 7<strong>
Explanation: </strong>
After sorting the given 3 sorted
list is 3 &lt;-&gt; 4 &lt;-&gt; 4 &lt;-&gt; 5 &lt;-&gt; 6 &lt;-&gt; 7.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>sortAKSortedDLL()&nbsp;</strong>which takes head&nbsp;node of the doubly linked list&nbsp;as input parameter and returns the head node after sorting.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N*logK)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(k)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>5</sup><br>1 &lt;= K &lt; N<br>1 &lt;= Data of a node &lt;= 10<sup>9</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;