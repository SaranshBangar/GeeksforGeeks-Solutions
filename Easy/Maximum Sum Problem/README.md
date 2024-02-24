<h2><a href="https://www.geeksforgeeks.org/problems/maximum-sum-problem2211/1">Maximum Sum Problem</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">A number <strong>n </strong>can be broken&nbsp;into&nbsp;three parts<strong> n/2</strong>,<strong> n/3</strong>,<strong> </strong>and<strong> n/4&nbsp;</strong>(consider only the&nbsp;<strong>integer </strong>part). Each number obtained in this process can be divided further recursively.&nbsp;Find the <strong>maximum sum </strong>that can be obtained by&nbsp;summing up the divided parts&nbsp;together.<br><strong>Note: </strong>It is possible that we don't divide the number at all.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 12
<strong>Output:</strong> <br>13
<strong>Explanation</strong>:</span>&nbsp;<br><span style="font-size: 18px;">B</span><span style="font-size: 18px;">reak n = 12 in three parts {12/2, 12/3, 12/4} = {6, 4, 3}, now current sum is = (6 + 4 + 3) = 13. Further breaking 6, 4 and 3 into parts will produce sum less than or equal to 6, 4 and 3 respectively.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
n = 24
<strong>Output:</strong> <br>27
<strong>Explanation</strong>: <br>Break n = 24 in three parts {24/2, 24/3, 24/4} = {12, 8, 6}, now current sum is = (12 + 8 + 6) = 26 . But recursively breaking 12 would produce value 13. So our maximum sum is 13 + 8 + 6 = 27.
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>maxSum()&nbsp;</strong>which accepts an integer n and returns the maximum sum.<br></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(n)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>0 &lt;= n &lt;= 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Morgan Stanley</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;