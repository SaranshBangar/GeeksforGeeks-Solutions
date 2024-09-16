<h2><a href="https://www.geeksforgeeks.org/problems/longest-valid-parentheses5657/1">Longest valid Parentheses</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string <strong>str</strong> consisting of opening and closing parenthesis '<strong>(</strong>' and '<strong>)</strong>'. Find length of the longest valid parenthesis substring.</span></p>
<p><span style="font-size: 18px;">A parenthesis string is valid if:</span></p>
<ul>
<li><span style="font-size: 18px;">For every opening parenthesis, there is a closing parenthesis.</span></li>
<li><span style="font-size: 18px;">Opening parenthesis must be closed in the correct order.</span></li>
</ul>
<p><strong><span style="font-size: 18px;">Examples :</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> str = ((()
<strong>Output:</strong> 2
<strong>Explaination:</strong> The longest valid parenthesis substring is "()".</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> str = )()())
<strong>Output:</strong> 4
<strong>Explaination:</strong> The longest valid parenthesis substring is "()()".</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(|str|)<br><strong>Expected Auxiliary Space:</strong> O(|str|)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |str| ≤ 10<sup>5</sup>&nbsp;&nbsp;</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;