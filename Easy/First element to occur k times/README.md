<h2><a href="https://www.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1">First element to occur k times</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array of <strong>n</strong> integers. Find the first element that occurs <strong>atleast k</strong> number of times. If no such element exists in the array, then expect the answer to be <strong>-1</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong>
n = 7, k = 2
a[] = {1, 7, 4, 3, 4, 8, 7}
<strong>Output :</strong>
4
<strong>Explanation :</strong>
Both 7 and 4 occur 2 times. But 4 is first that occurs twice.
As at <strong>index = 4</strong>, 4 has occurred twice whereas 7 appeared twice<br>at index 6.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input :</span></strong><span style="font-size: 18px;"><br>n = 10, k = 3<br>a</span><span style="font-size: 18px;">[] = {3, 1, 3, 4, 5, 1, 3, 3, 5, 4}<br></span><strong style="font-size: 18px;">Output :<br></strong><span style="font-size: 18px;">3<br></span><strong style="font-size: 18px;">Explanation :<br></strong><span style="font-size: 18px;">Here, 3 is the only number that appeared <strong>atleast</strong> 3 times in the array.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>firstElementKTime()</strong> which takes the array <strong>a</strong><strong>[]</strong>, its size <strong>n</strong><strong>,&nbsp;</strong>and an integer <strong>k</strong><strong>&nbsp;</strong>as input arguments and <strong>returns</strong> the required answer. If the answer is not present in the array, return <strong>-1</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n).<br><strong>Expected Auxiliary Space:</strong> O(n).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>4</sup><br>1 &lt;= k &lt;= 100<br>0 &lt;= a[i] &lt;= 200</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;