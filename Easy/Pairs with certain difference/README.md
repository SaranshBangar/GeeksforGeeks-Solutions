<h2><a href="https://www.geeksforgeeks.org/problems/pairs-with-specific-difference1533/1?page=1&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=accuracy">Pairs with certain difference</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of integers,&nbsp;<strong>arr[]</strong> and a number,&nbsp;<strong>K</strong>.You&nbsp;can pair two numbers of the array if the difference between them is strictly less than <strong>K</strong>. The task is to find the maximum possible sum of such&nbsp;disjoint pairs (i.e., each element of the array can be used at most once). The Sum of <strong>P</strong> pairs is the sum of all <strong>2P</strong>&nbsp;elements of pairs.</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input  : </strong>
arr[] = {3, 5, 10, 15, 17, 12, 9}
K = 4
<strong>Output : </strong>
62
<strong>Explanation :</strong>
Then disjoint pairs with difference less
than K are, (3, 5), (10, 12), (15, 17)
max sum which we can get is 
3 + 5 + 10 + 12 + 15 + 17 = 62
Note that an alternate way to form 
disjoint pairs is,(3, 5), (9, 12), (15, 17)
but this pairing produces less sum.</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input  : </strong>
arr[] = {5, 15, 10, 300}
K = 12
<strong>Output : </strong>
25</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read, input, or print anything. Your task is to complete the function&nbsp;<strong>maxSumPairWithDifferenceLessThanK()</strong>&nbsp;which takes the array <strong>arr[]</strong>, its size <strong>N,</strong><strong> </strong>and an integer <strong>K </strong>as inputs and returns the maximum possible sum of disjoint pairs.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N. log(N))<br>
<strong>Expected Auxiliary Space: </strong>O(N)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
0 ≤ K ≤ 10<sup>5</sup><br>
1 ≤ arr[i] ≤ 10<sup>4</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;