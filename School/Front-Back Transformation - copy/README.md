<h2><a href="https://www.geeksforgeeks.org/problems/front-back-transformation1659/1?page=1&difficulty=School&status=unsolved&sortBy=accuracy">Front-Back Transformation - copy</a></h2><h3>Difficulty Level : School</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string S, consisting only of english alphabets, replace all the alphabets with the alphabets occuring at the same position when counted in reverse order of alphabets. For example, 'a' would be replaced by 'z', 'b' by 'y', 'c' by 'x' and so on. Any capital letters would be replaced by capital letters only.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> S = "Hello"
<strong>Output:</strong> Svool
<strong>Explanation:</strong> 'H' is the 8th letter from the
beginning of alphabets, which is replaced by
'S' which comes at 8th position in reverse order
of alphabets. Similarly, all other letters are 
replaced by their respective upper or lower case 
letters accordingly.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> S = "GfG"
<strong>Output:</strong> TuT
<strong>Explanation: </strong>'G' is replaced with 'T'
and 'f' is replaced with 'u'</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>convert()</strong>&nbsp;which accepts a string&nbsp;as input parameter and returns the modified&nbsp;string according to given conditions.&nbsp;</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(Length of string)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(Length of string)</span></p>

<p><span style="font-size:18px"><strong>Constraints</strong>:</span></p>

<p><span style="font-size:18px">1&nbsp;&lt;=&nbsp;Length of string S &lt;= 10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;