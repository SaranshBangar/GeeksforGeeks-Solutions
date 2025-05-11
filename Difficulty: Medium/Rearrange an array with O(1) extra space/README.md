<h2><a href="https://www.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1">Rearrange an array with O(1) extra space</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array&nbsp;<strong>arr[]</strong>&nbsp;of size <strong>N</strong> where every element is in the range from&nbsp;<strong>0&nbsp;to&nbsp;n-1</strong>. Rearrange the given array so that the transformed array <strong>arr<sup>T</sup>[i]</strong> becomes&nbsp;<strong>arr[arr[i]]</strong>.</span></p>
<p><strong><span style="font-size: 18px;">NOTE:</span></strong><span style="font-size: 18px;">&nbsp;<strong>arr </strong>and&nbsp;<strong>arr<sup>T</sup> </strong>are both same variables, representing the array before and after transformation respectively.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:<br></strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 2
arr[] = [1,0]
<strong>Output: </strong>0 1<strong>
Explanation: 
</strong>arr[arr[0]] = arr[1] = 0
arr[arr[1]] = arr[0] = 1<br></span><span style="font-size: 14pt;">So, arr<sup>T</sup> becomes {0, 1}</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 5
arr[] = [4,0,2,1,3]
<strong>Output: </strong>3 4 2 0 1<strong>
Explanation: 
</strong>arr[arr[0]] = arr[4] = 3
arr[arr[1]] = arr[0] = 4<br>arr[arr[2]] = arr[2] = 2<br>arr[arr[3]] = arr[1] = 0<br>arr[arr[4]] = arr[3] = 1<br>and so on<br></span><span style="font-size: 14pt;">So, arr<sup style="font-family: sans-serif;">T</sup></span><span style="font-size: 14pt; font-family: sans-serif;"> becomes {3, 4, 2, 0, 1}</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= N &lt;= 10<sup>5</sup><br>0 &lt;= arr[i] &lt; N</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;