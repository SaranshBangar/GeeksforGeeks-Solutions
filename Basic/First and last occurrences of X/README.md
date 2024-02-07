<h2><a href="https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x2041/1?page=1&difficulty=School,Basic&status=unsolved&sortBy=latest">First and last occurrences of X</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a sorted array having <strong>N&nbsp;</strong>elements,&nbsp;find the indices&nbsp;of the first and last occurrences of an element <strong>X</strong>&nbsp;in the given array.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> If the number <strong>X&nbsp;</strong>is not found in the array, return '-1' as an array.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4 , X = 3
arr[] = { 1, 3, 3, 4 }
<strong>Output:</strong>
1 2
<strong>Explanation:</strong>
For the above array, first occurence
of <strong>X = 3 </strong>is at <strong>index = 1</strong> and last
occurence is at <strong>index = 2</strong>.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4, X = 5
arr[] = { 1, 2, 3, 4 }
<strong>Output:</strong>
-1
<strong>Explanation: </strong>
As 5 is not present in the array,
so the answer is -1.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Complete the function <strong>firstAndLast</strong><strong>()</strong> that takes the array <strong>arr</strong>, its size <strong>N&nbsp;</strong>and the value <strong>X&nbsp;</strong>as input parameters and returns a list of integers containing the indices of first and last occurence of&nbsp;<strong>X.</strong></span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(log(N))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:&nbsp;</strong><br>
1 &lt;= N &lt;= 10^5&nbsp;</span></p>

<p><span style="font-size:18px">0 &lt;= arr[i], X &lt;= 10<sup>9</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;