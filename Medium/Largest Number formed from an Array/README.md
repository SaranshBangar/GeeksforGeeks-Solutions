<h2><a href="https://www.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1">Largest Number formed from an Array</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array of strings <strong>arr[] </strong>of length<strong> n </strong>representing non-negative integers, arrange them in a manner, such that, after concatanating them in order, it results in the <strong>largest possible number</strong>. Since the result may be very large, return it as a string.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
n = 5
arr[] =  {"3", "30", "34", "5", "9"}
<strong>Output:</strong> "9534330"
<strong>Explanation:</strong> <br>Given numbers are  {"3", "30", "34", "5", "9"}, <br>the arrangement "9534330" gives the largest value.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
n = 4
arr[] =  {"54", "546", "548", "60"}
<strong>Output:</strong> "6054854654"
<strong>Explanation:</strong> <br>Given numbers are {"54", "546", "548", "60"}, the <br>arrangement "6054854654" gives the largest value.</span></pre>
<p><span style="font-size: 18px;"><strong style="font-size: 18px;">Your Task:&nbsp;&nbsp;</strong><br><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function <strong>printLargest()</strong> which takes the array of strings <strong>arr[]</strong> as a parameter and <strong>returns a string</strong> denoting the answer.</span></span></p>
<p><span style="font-size: 18px;"><strong style="font-size: 18px;">Expected Time Complexity:</strong><span style="font-size: 18px;"> O(n*log(n) ).</span><br><strong style="font-size: 18px;">Expected Auxiliary Space:</strong><span style="font-size: 18px;"> O(n).</span></span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>5</sup><br>0 ≤ arr[i] ≤ 10<sup>18</sup></span><br><span style="font-size: 18px;">Sum of all the elements of the array is greater than 0.</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Zoho</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;