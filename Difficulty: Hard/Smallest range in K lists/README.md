<h2><a href="https://www.geeksforgeeks.org/problems/find-smallest-range-containing-elements-from-k-lists/1">Smallest range in K lists</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a 2d integer array&nbsp;<strong>arr[][]</strong>&nbsp;of size k*n, where each row is sorted in <strong>ascending order</strong>. Your task is to find the&nbsp;<strong>smallest range</strong>&nbsp;[l, r] that includes at least&nbsp;<strong>one</strong>&nbsp;element from each of the&nbsp;<strong>k&nbsp;</strong>lists. If more than one such ranges are found, return the&nbsp;<strong>first one</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 5, k = 3, arr[][] = [[4, 7, 9, 12, 15], [0, 8, 10, 14, 20], [6, 12, 16, 30, 50]]
<strong>Output: </strong>[6, 8]<strong>
Explanation: </strong>Smallest range is formed by  number 7 from the first list, 8 from second list and 6 from the third list.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 5, k = 3, arr[][] = [[1, 3, 5, 7, 9], [0, 2, 4, 6, 8], [2, 3, 5, 7, 11]]
<strong>Output: </strong>[1, 2]<strong>
Explanation: </strong>Smallest range is formed by number 1 present in first list and 2 is present in both 2nd and 3rd list.</span>
</pre>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input: </strong><span style="font-size: 18px;">n = 2, k = 3, arr[][] = [[2, 4], [1, 7], [20, 40]]
</span><strong style="font-size: 18px;">Output: </strong><span style="font-size: 18px;">[4, 20]<br><strong>Explanation:</strong> Smallest range is formed by number 4 from the first list, 7 from second list and 20 from the third list.</span></span></pre>
<div><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= k, n &lt;= 500</span></div>
<div><span style="font-size: 18px;">0 &lt;= arr[ i ] &lt;= 10<sup>5</sup></span></div></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Heap</code>&nbsp;<code>Data Structures</code>&nbsp;