<h2><a href="https://www.geeksforgeeks.org/problems/sum-of-divisors-in-an-array2954/1?page=7&difficulty=School,Basic,Easy&status=unsolved&sortBy=latest">Sum of Divisors in an array</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array of natural numbers count the sum of its proper divisors for every element in the array.</span></p>
<p><strong><span style="font-size: 18px;">Note: For simplicity, 0 is assumed to be a proper divisor of itself.</span></strong></p>
<p><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 3
arr = {2, 4, 3}
<strong>Output:</strong> {1, 3, 1}
<strong>Explaination:</strong> 
divisor of 2 is 1.
divisors of 4 is 1, 2.
divisor of 3 is 1.</span>
</pre>
<p><br><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 3
Arr = {2, 4, 1}
<strong>Output:</strong> {1, 3, 0}
<strong>Explaination:</strong> 
Proper divisor of 2 is 1.
Proper divisors of 4 is 1, 2.</span>
</pre>
<p><br><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>sumOfProperDivisors()</strong>&nbsp;which takes the array a<strong>rr[]</strong> and its size <strong>N&nbsp;</strong>as input parameters&nbsp;and returns&nbsp;the sum of its proper divisors for every element in the array.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(NlogN)<br><strong>Expected Auxiliary Space:</strong> O(N)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 100</span><br><span style="font-size: 18px;">0 ≤ arr[i] ≤ 100</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>sieve</code>&nbsp;<code>Algorithms</code>&nbsp;