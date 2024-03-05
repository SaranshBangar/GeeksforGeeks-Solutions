<h2><a href="https://www.geeksforgeeks.org/problems/maximum-index-1587115620/1">Maximum Index</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an array <strong>a</strong> of <strong>n</strong> positive integers. The task is to&nbsp;find the maximum of <strong>j - i</strong> subjected to the constraint of <strong>a[i] <u>&lt;</u> a[j] </strong>and <strong>i <u>&lt;</u>&nbsp;j</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:
</strong>n = 2
a[] = {1, 10}
<strong>Output:
</strong>1<strong>
Explanation:
</strong>a[0] <u style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">&lt;</u> a[1] so (j-i) is 1-0 = 1.</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:
</strong>n = 9
a[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
<strong>Output:
</strong>6<strong>
Explanation:
</strong>In the given array a[1] &lt; a[7] satisfying the required condition(a[i] <u>&lt;</u> a[j]) thus giving the maximum difference of j - i which is 6(7-1).
</span></pre>
<p><span style="font-size: 14pt;"><strong>Your Task:</strong><br>The task is to complete the function <strong>maxIndexDiff()</strong> which finds and returns maximum index difference. Printing the output will be handled by driver code.&nbsp;</span></p>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(N)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>6</sup><br>0 ≤ a[i] ≤ 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>VMWare</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;