<h2><a href="https://www.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1">Maximize Array Value After Rearrangement</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;"><span style="font-family: arial,helvetica,sans-serif;">Given an array <strong>arr</strong> of <strong>n</strong> integers. Your task is to write a program to find the maximum value of <strong>∑arr[i]*i</strong>, where i = 0, 1, 2,., n-1. You are allowed to rearrange the elements of the array.<br><strong><br>Note</strong>: Since the output could be large, print the answer modulo <strong>10<sup>9</sup>+7</strong>.</span></span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [5, 3, 2, 4, 1]
<strong>Output :</strong> 40
<strong>Explanation: </strong>If we arrange the array as 1 2 3 4 5 then we can see that the minimum index will multiply with minimum number and maximum index will multiply with maximum number. So, 1*0 + 2*1 + 3*2 + 4*3 + 5*4 = 0+2+6+12+20 = 40 mod(10<sup>9</sup>+7) = 40

</span></pre>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[] = [1, 2, 3]
<strong>Output :</strong> 8
</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(nlog(n))<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 18px;"><span style="font-family: arial,helvetica,sans-serif;"><strong>Constraints:</strong><br>1 ≤ arr.size ≤ 10<sup>5</sup><br>1 ≤ arr<sub>i</sub> ≤ 10<sup>5</sup></span></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>SAP Labs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;