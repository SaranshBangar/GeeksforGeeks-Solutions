<h2><a href="https://www.geeksforgeeks.org/problems/the-problem-of-identical-arrays3229/1?page=1&difficulty=School,Basic&status=unsolved&sortBy=latest">The problem of identical arrays</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Two arrays of size N are called identical arrays if they contain the same elements. The order of elements in both arrays could be different; however,&nbsp;both the arrays must contain same elements. You are given two arrays of size N.</span></p>

<p><span style="font-size:18px">You need to determine if the arrays are identical or not.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span><br>
&nbsp;</p>

<pre><span style="font-size:18px"><strong>Input :</strong> A[] = {1, 2, 3, 4, 5}, B[] = {3, 4, 1, 2, 5}
<strong>Output :</strong> 1
<strong>Explanation:</strong>
Here we can see array A[] = [1, 2, 3, 4, 5] and 
B[] = [3, 4, 1, 2, 5]. If we look both the array then we 
can get that array B is the permutation of A. So, both array
are identical. </span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> A[] = {1, 2, 4}, B[] = {3, 2, 1} <strong>
Output :</strong> 0 </span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>check()</strong> that takes an array <strong>(arr)</strong>, another array <strong>(brr)</strong>,&nbsp;size of both array&nbsp;<strong>(n)</strong>, and return the 1 if both the array are identical else 0. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(NLog(N)).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
0 ≤ A[i] ≤ 9</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;