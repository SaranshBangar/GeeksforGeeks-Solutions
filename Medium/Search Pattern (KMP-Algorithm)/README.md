<h2><a href="https://www.geeksforgeeks.org/problems/search-pattern0205/1">Search Pattern (KMP-Algorithm)</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two strings, one is a text string,&nbsp;<strong>txt</strong> and other is a pattern string, <strong>pat</strong>. The task is to print the indexes of <strong>all the occurences</strong> of pattern string in the text string. Use one-based indexing while returing the indices.&nbsp;<br><strong>Note:&nbsp;</strong>Return an empty list incase of no occurences of pattern. Driver will print -1 in this case.<br></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
txt = "geeksforgeeks"<br>pat = "geek"
<strong>Output:</strong> <br>1 9
<strong>Explanation</strong>: <br>The string "geek" occurs twice in txt, one starts are index 1 and the other at index 9. </span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
txt = "abesdu"<br>pat = "edu"
<strong>Output:</strong> <br>-1
<strong>Explanation</strong>: <br>There's not substring "edu" present in txt.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>search()&nbsp;</strong>which takes the string <strong>txt</strong>&nbsp;and the string <strong>pat</strong> as inputs and returns an array denoting the start indices (1-based) of substring pat in the string txt.&nbsp;<br></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(|txt|).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(|txt|).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |txt| ≤ 10<sup>5</sup><br>1 ≤ |pat| &lt; |S|<br>Both the strings consists of lowercase English alphabets.</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Pattern Searching</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;