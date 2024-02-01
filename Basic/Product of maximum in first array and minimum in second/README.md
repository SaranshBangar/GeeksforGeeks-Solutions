<h2><a href="https://www.geeksforgeeks.org/problems/product-of-maximum-in-first-array-and-minimum-in-second3943/1?page=1&category=Arrays,Binary%20Search%20Tree&difficulty=Basic,Easy&status=unsolved&sortBy=accuracy">Product of maximum in first array and minimum in second</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two arrays of A and B respectively of sizes N<sub>1</sub> and N<sub>2</sub>, the task is to calculate the product of the maximum element of the first array and minimum element of the second array.</span></p>

<p><span style="font-size:20px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:20px"><strong>Input :</strong> A[] = {5, 7, 9, 3, 6, 2}, 
        B[] = {1, 2, 6, -1, 0, 9}
<strong>Output :</strong> -9
<strong>Explanation:
</strong>The first array is 5 7 9 3 6 2. 
The max element among these elements is 9.
The second array is 1 2 6 -1 0 9.
The min element among these elements is -1.
The product of 9 and -1 is 9*-1=-9.

</span></pre>

<p><span style="font-size:20px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:20px"><strong>Input :</strong> A[] = {0, 0, 0, 0}, 
           B[] = {1, -1, 2}
<strong>Output :</strong> 0

</span></pre>

<p><span style="font-size:20px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>find_multiplication()</strong> that takes an array of integer&nbsp;<strong>(A)</strong>, another array of integer <strong>(B),&nbsp;</strong>size of array A<strong>(n)</strong>, size of array B<strong>(m)</strong>&nbsp;and return the&nbsp;</span><span style="font-size:18px">product of the max element of the first array and the minimum element of the second array</span><span style="font-size:20px">. The driver code takes care of the printing.</span></p>

<p><span style="font-size:20px"><strong>Expected Time Complexity:</strong>&nbsp;O(N + M).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Output:</strong><br>
For each test case, output the product of the max element of the first array and the minimum element of the second array.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, M<sub>&nbsp;</sub>≤ 10<sup>6</sup><br>
-10<sup>8</sup> ≤ A<sub>i,&nbsp;</sub>B<sub>i</sub>&nbsp;≤ 10<sup>8</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;