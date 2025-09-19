<h2><a href="https://www.geeksforgeeks.org/problems/min-add-to-make-parentheses-valid/1">Min Add to Make Parentheses Valid</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18.6667px;">You are given a string <strong>s</strong> consisting&nbsp;only of the characters <strong>'('</strong> and <strong>')'</strong>. Your task is to determine the </span><strong style="font-size: 18.6667px;">minimum</strong><span style="font-size: 18.6667px;">&nbsp;number of parentheses (either '(' or ')') that must be inserted at any positions to make the string s a <strong>valid parentheses string</strong>.</span></p>
<p><span style="font-size: 18.6667px;">A parentheses string is considered <strong>valid </strong>if:<br></span></p>
<ol>
<li><span style="font-size: 18.6667px;">Every opening parenthesis '(' has a corresponding closing parenthesis ')'.</span></li>
<li><span style="font-size: 18.6667px;">Every closing parenthesis ')' has a corresponding opening parenthesis '('.</span></li>
<li><span style="font-size: 18.6667px;">Parentheses are properly nested.</span></li>
</ol>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = "(()("
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are two unmatched '(' at the end, so we need to add two ')' to make the string valid.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = ")))"
<strong>Output:</strong> 3
<strong>Explanation: </strong>Three '(' need to be added at the start to make the string valid.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = ")()()"
<strong>Output:</strong> 1 <br><strong>Explanation: </strong>The very first ')' is unmatched, so we need to add one '(' at the beginning.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ s.size() ≤ 10<sup>5</sup><br>s[i] ∈ { '(' , ')' }</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>TCS</code>&nbsp;<code>Adobe</code>&nbsp;<code>IBM</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;