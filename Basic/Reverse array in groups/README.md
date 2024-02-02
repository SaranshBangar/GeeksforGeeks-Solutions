<h2><a href="https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1?page=2&sortBy=submissions">Reverse array in groups</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> If at any instance, there are no more subarrays of size greater than or equal to K, then reverse the last subarray (irrespective of its size). You shouldn't return any array, modify the given array in-place.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5, K = 3
arr[] = {1,2,3,4,5}
<strong>Output: </strong>3 2 1 5 4<strong>
Explanation: </strong>First group consists of elements
1, 2, 3. Second group consists of 4,5.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4, K = 3
arr[] = {5,6,8,9}
<strong>Output: </strong>8 6 5 9</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your&nbsp;Task:</strong><br>
You don't need to read input or print anything.&nbsp;The task is to complete the function <strong>reverseInGroups</strong>() which takes the array, N and K as input parameters and modifies the array in-place.&nbsp;</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, K ≤ 10<sup>7</sup><br>
1 ≤ A[i] ≤ 10<sup>18</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;