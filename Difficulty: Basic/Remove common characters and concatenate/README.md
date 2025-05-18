<h2><a href="https://www.geeksforgeeks.org/problems/remove-common-characters-and-concatenate-1587115621/1?page=3&difficulty=Basic,Easy&status=unsolved&sortBy=submissions">Remove common characters and concatenate</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two strings&nbsp;s1&nbsp;and&nbsp;s2. Modify both the strings such that all the common characters of s1 and s2 are to be removed and the uncommon characters of s1 and s2 are to be concatenated.<br>
<strong>Note:&nbsp;</strong>If all characters are removed&nbsp;print&nbsp;-1.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>s1 = aacdb
s2 = gafd
<strong>Output: </strong>cbgf<strong>
Explanation: </strong>The common characters of s1
and s2 are: a, d. The uncommon characters
of s1 and s2 are c, b, g and f. Thus the
modified string with uncommon characters
concatenated is cbgf.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>s1 = abcs
s2 = cxzca
<strong>Output: </strong>bsxz<strong>
Explanation: </strong>The common characters of s1
and s2 are: a,c. The uncommon characters
of s1 and s2 are b,s,x and z. Thus the
modified string with uncommon characters
concatenated is bsxz.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function&nbsp;<strong>concatenatedString()</strong> which removes the common characters, concatenates, and returns the&nbsp;string. If all characters are removed then return -1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(Number of distinct characters).<br>
<strong>Note:&nbsp;</strong>N =&nbsp;|Length of Strings|</span></p>

<p><span style="font-size:18px"><strong>Constraints:&nbsp;</strong><br>
1 &lt;= |Length of Strings| &lt;= 10<sup>4</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;