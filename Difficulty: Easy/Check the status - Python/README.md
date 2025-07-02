<h2><a href="https://www.geeksforgeeks.org/problems/check-the-status/1?page=1&difficulty=Basic,Easy&status=unsolved&sortBy=submissions">Check the status - Python</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given two integer variables <strong>a</strong> and <strong>b</strong>, and a boolean variable&nbsp;<strong>flag</strong>. The task is to check the status and return accordingly.</span></p>
<p><span style="font-size: 14pt;">Return&nbsp;<strong>True&nbsp;</strong>for the following cases:</span></p>
<ul>
<li><span style="font-size: 14pt;">Either&nbsp;<strong>a</strong>&nbsp;or&nbsp;<strong>b</strong> (not both) is non-negative and the <strong>flag</strong>&nbsp;is false.<br></span></li>
<li><span style="font-size: 14pt;">Both&nbsp;<strong>a</strong>&nbsp;and&nbsp;<strong>b</strong> are negative and the&nbsp;<strong>flag</strong>&nbsp;is true.</span></li>
</ul>
<p><span style="font-size: 14pt;">Otherwise, return <strong>False</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong><strong>&nbsp;</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>a = 1, b = -1, flag = False
<strong>Output: </strong>True
<strong>Explanation: </strong>Since a is positive, b is negative, and flag is False, condition 1 holds true, so the function returns True.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>a = -182, b = -9121, flag = True
<strong>Output: </strong>True
<strong>Explanation: </strong>Since both a and b are negative and flag is True, condition 2 holds true, so the function returns True.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>a = 5, b = 3, flag = True
<strong>Output: </strong>False
<strong>Explanation: </strong>Neither condition 1 nor condition 2 holds, so the function returns False.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>-10 &lt;= a, b &lt;= 10<br>flag<sup>&nbsp;</sup>∈ {True, False}&nbsp;</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>python-conditionals</code>&nbsp;<code>python</code>&nbsp;