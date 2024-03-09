<h2><a href="https://www.geeksforgeeks.org/problems/find-the-n-th-character5925/1">Find the N-th character</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a binary string <strong>s</strong>. Perform <strong>r</strong> iterations on string s, where in each iteration <strong>0 </strong>becomes<strong> 01</strong> and <strong>1 </strong>becomes<strong> 10</strong>. Find the <strong>nth</strong> character (considering <strong>0 based </strong>indexing) of the string after performing these r iterations (see examples for better understanding).</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input</strong>:
s = "1100"
r = 2
n = 3
<strong>Output</strong>:
1
<strong>Explanation</strong>: 
After 1st iteration <strong style="font-size: 14pt; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">s</strong><span style="font-size: 14pt; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> becomes "</span>10100101<span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">".<br></span>After 2nd iteration <strong>s</strong> becomes "100<strong>1</strong>100101100110<span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">".<br></span></span><span style="font-size: 14pt;">Now, we can clearly see that the character at 3rd index is 1, and so the output.
</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input</strong>:
s = "1010"
r = 1
n = 2
<strong>Output</strong>:
0
<strong>Explanation </strong>: 
After 1st iteration <strong>s</strong> becomes "10<strong>0</strong>11001".
Now, we can clearly see that the character at 2nd index is 0, and so the output.</span></pre>
<div><span style="font-size: 14pt;"><strong>Your task:</strong></span></div>
<div><span style="font-size: 14pt;">You don't need to read input or print anything. Your task is to complete the function <strong>nthCharacter()</strong> which takes the string <strong>s</strong> and integers <strong>r</strong> and <strong>n</strong> as input parameters and returns the n-th character of the string after performing r operations on s.</span></div>
<div>&nbsp;</div>
<div><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(r*|s|)</span></div>
<div><span style="font-size: 14pt;"><strong>Expected Auxilary Space:</strong> O(|s|)</span></div>
<div>&nbsp;</div>
<div><span style="font-size: 14pt;"><strong>Constraints</strong>: </span><br><span style="font-size: 14pt;">1 ≤ |s|&nbsp;≤ 10<sup>3</sup></span><br><span style="font-size: 14pt;">1 ≤ r ≤ 20</span><br><span style="font-size: 14pt;">0 ≤ n &lt;&nbsp;|s|</span></div></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;