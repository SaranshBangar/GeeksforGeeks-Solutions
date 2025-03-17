<h2><a href="https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1">Subset Sum Problem</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an array of positive integers <strong>arr[]</strong> and a value <strong>sum</strong>, determine if there is a subset of <strong>arr[]</strong> with sum equal to given <strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">sum</strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">.&nbsp;</span></span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: arr[] = [3, 34, 4, 12, 5, 2], sum = 9<br><strong>Output:</strong> true&nbsp;
<strong>Explanation</strong>: Here there exists a subset with target sum = 9, 4+3+2 = 9.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: arr[] = [3, 34, 4, 12, 5, 2], sum = 30
<strong>Output:</strong> false
<strong>Explanation</strong>: There is no subset with target sum 30.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: arr[] = [1, 2, 3], sum = 6
<strong>Output:</strong> true<br><strong>Explanation</strong>: The entire array can be taken as a subset, giving 1 + 2 + 3 = 6.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= arr.size() &lt;= 200</span><br><span style="font-size: 14pt;">1&lt;= arr[i] &lt;= 200<br>1&lt;= sum &lt;= 10<sup>4</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;