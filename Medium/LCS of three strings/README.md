<h2><a href="https://www.geeksforgeeks.org/problems/lcs-of-three-strings0028/1">LCS of three strings</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given 3 strings <strong>A</strong>, <strong>B</strong>&nbsp;and <strong>C</strong>, the task is to find the <strong>length </strong>of the <strong>longest sub-sequence </strong>that is <strong>common </strong>in all the three given strings.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
A = "geeks"<br>B = "geeksfor", 
C = "geeksforgeeks"
<strong>Output:</strong> 5
<strong>Explanation</strong>: <br>"geeks"is the longest common
subsequence with length 5.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
A = "abcd"<br>B = "efgh"<br>C = "ijkl"
<strong>Output:</strong> 0
<strong>Explanation</strong>: <br>There's no subsequence common
in all the three strings.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>LCSof3()&nbsp;</strong>which takes the strings <strong>A</strong>,<strong> B</strong>, <strong>C</strong> and their lengths <strong>n1</strong>, <strong>n2</strong>, <strong>n3&nbsp;</strong>as input and returns the <strong>length </strong>of the <strong>longest common subsequence </strong>in all the 3 strings.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n1*n2*n3).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(n1*n2*n3).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n1, n2, n3 &lt;= 20<br>Elements of the strings consitutes only of the lower case english alphabets.</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>DE Shaw</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;