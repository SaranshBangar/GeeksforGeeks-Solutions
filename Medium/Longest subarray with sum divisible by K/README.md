<h2><a href="https://www.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1">Longest subarray with sum divisible by K</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr</strong> containing <strong>N</strong> integers and a positive integer <strong>K</strong>, find the length of the longest sub array with sum of the elements divisible by the given value <strong>K</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 6, K = 3<br>arr[] = {2, 7, 6, 1, 4, 5}
<strong>Output:</strong> <br>4
<strong>Explanation:<br></strong>The subarray is {7, 6, 1, 4} with sum 18, which is divisible by 3.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 7, K = 3<br>arr[] = {-2, 2, -5, 12, -11, -1, 7}
<strong>Output:</strong> <br>5
<strong>Explanation:
</strong>The subarray is {2,-5,12,-11,-1} with sum -3, which is divisible by 3.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>The input is already taken care of by the driver code. You only need to complete the function <strong>longSubarrWthSumDivByK()</strong> that takes an array <strong>arr</strong>, sizeOfArray <strong>n </strong>and a<strong> </strong>&nbsp;positive integer <strong>K</strong>, and returns the length of the longest subarray which has sum divisible by <strong>K</strong>.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>5</sup><br>1 &lt;= K &lt;= 10<sup>9</sup><br>-10<sup>9</sup> &lt;= A[i] </span><span style="font-size: 18px;">&lt;= 10<sup>9</sup></span>&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>prefix-sum</code>&nbsp;<code>sliding-window</code>&nbsp;<code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;