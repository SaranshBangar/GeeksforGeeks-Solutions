<h2><a href="https://www.geeksforgeeks.org/problems/trail-of-ones3242/1">Trail of ones</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a number <strong>n</strong>, find the number of binary strings of length <strong>n </strong>that contain consecutive 1's in them. Since the number can be very large, return the answer after modulo with 1e9+7.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong> <span style="font-size: 18px;">n = 2</span>
<strong><span style="font-size: 18px;">Output:</span></strong> <span style="font-size: 18px;">1</span>
<strong><span style="font-size: 18px;">Explanation:</span></strong> <span style="font-size: 18px;">There are 4 strings of </span><span style="font-size: 18px;">length 2, the strings are </span><span style="font-size: 18px;">00, 01, 10, and 11. Only </span><span style="font-size: 18px;">the string 11 has </span><span style="font-size: 18px;">consecutive 1's.<br></span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-family: arial, helvetica, sans-serif; font-size: 14pt;"><strong>Input</strong>: n = 3
<strong>Output</strong>: 3
<strong>Explanation</strong>: There are 8 strings of length 3, the strings are 000, 001, 010, 011, 100, 101, 110 and 111.  The strings with consecutive 1's are 011, 110 and 111.</span></pre>
<p><strong><span style="font-size: 18px;">Example 3:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input: </span></strong><span style="font-size: 18px;">n = 5</span>
<strong><span style="font-size: 18px;">Output: </span></strong><span style="font-size: 18px;">19</span>
<strong><span style="font-size: 18px;">Explanation: </span></strong><span style="font-size: 18px;">There are 19 strings</span> <span style="font-size: 18px;">having consecutive 1's.
</span></pre>
<p><strong><span style="font-size: 18px;">Your Task:<br></span></strong><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function numberOfConsecutiveOnes() which takes an integer n and returns the number of binary strings<strong>&nbsp;</strong>that contain consecutive 1s in them.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints</strong><br>2 &lt;= <strong>n </strong>&lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;