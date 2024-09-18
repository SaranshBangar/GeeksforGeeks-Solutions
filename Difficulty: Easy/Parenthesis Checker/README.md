<h2><a href="https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1">Parenthesis Checker</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an expression string <strong>x</strong>. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.<br>For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).</span></p>
<p><strong><span style="font-size: 18px;">Note: </span></strong><span style="font-size: 18px;">The <strong>driver code</strong> prints "balanced" if function return true, otherwise it prints "not balanced".</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: {([])}
<strong>Output</strong>: true
<strong>Explanation</strong>: <span style="color: #ff0000;">{</span> <span style="color: #00ff00;">(</span> <span style="color: #0000cd;">[</span> <span style="color: #0000cd;">]</span> <span style="color: #00ff00;">)</span> <span style="color: #ff0000;">}.&nbsp;</span>Same colored brackets can form balanced pairs, with 0 number of unbalanced bracket.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: ()
<strong>Output</strong>: true
<strong>Explanation</strong>: <span style="color: #00ff00;">()</span><span style="color: #000000;">. </span>Same bracket can form balanced pairs,and here only 1 type of bracket is present and in balanced way.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: ([]
<strong>Output</strong>: false
<strong>Explanation</strong>: <span style="color: #00ff00;">(</span><span style="color: #0000cd;">[]</span>.<span style="color: #000000;"> </span>Here square bracket is balanced but the small bracket is not balanced and Hence , the output will be unbalanced.</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong>: O(|x|)<br><strong>Expected Auixilliary Space</strong>: O(|x|)</span><br><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |x| ≤ 10<sup>5</sup></span></p>
<p>&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Oracle</code>&nbsp;<code>Walmart</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<code>Yatra.com</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Stack</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;