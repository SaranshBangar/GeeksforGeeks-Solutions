<h2><a href="https://www.geeksforgeeks.org/problems/smallest-number-repeating-k-times3239/1?page=9&difficulty=Basic,Easy&status=unsolved&sortBy=submissions">Smallest number repeating K times</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr&nbsp;</strong>of size <strong>N</strong>, the goal is to find out the smallest number that is repeated exactly ‘<strong>K</strong>’ times.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N=5, K=2
arr[] = { 2 2 1 3 1 }
<strong>Output:</strong> 1
<strong>Explanation</strong>: Here in array,
2 is repeated 2 times, 1 is repeated
2 times, 3 is repeated 1 time.
Hence 2 and 1 both are repeated 'k' 
times i.e 2 and min(2, 1) is 1 .
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N=4, K=1 
arr[] = { 3 5 3 2 }
<strong>Output:</strong>  2 
<strong>Explanation: </strong>Both 2 and 5 are repeating 1
time but min(5, 2) is 2.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You just need to complete the function <strong>findDuplicate</strong>() that takes <strong>array arr,&nbsp;integer N and&nbsp;integer K</strong>&nbsp;as parameters and <strong>returns</strong> the required answer.<br>
<strong>Note-</strong> If there is no such element then return <strong>-1</strong>.</span></p>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(MAX). where MAX is maximum element in the array.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ arr[i]&nbsp;≤ 10<sup>5</sup></span></p>

<p>&nbsp;</p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;