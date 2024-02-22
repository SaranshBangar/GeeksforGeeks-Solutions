<h2><a href="https://www.geeksforgeeks.org/problems/distinct-occurrences/1">Distinct occurrences</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two strings <strong>s </strong>and<strong> t</strong> of length <strong>n</strong> and <strong>m</strong> respectively. Find the count of distinct occurrences of t in s as a sub-sequence </span><strong><span style="font-size: 18px;">modulo&nbsp;10</span><sup>9</sup></strong><span style="font-size: 18px;"><strong> + 7.</strong></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
s = "banana" , t = "ban"
<strong>Output:</strong> <br>3
<strong>Explanation</strong>: <br>There are 3 sub-sequences:[ban], [ba n], [b an].</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
s = "geeksforgeeks" , t = "ge"
<strong>Output:</strong> <br>6
<strong>Explanation</strong>: <br>There are 6 sub-sequences:[ge], [ge], [g e], [g e] [g e] and [g e].</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything.Your task is to complete the function&nbsp;<strong>subsequenceCount()</strong> which takes two strings as argument s and t and returns the count of the sub-sequences modulo 10<sup>9</sup> + 7.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(n*m).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(n*m).<br><br><strong>Constraints:</strong><br>1 ≤ n,m ≤ 1000<br></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;