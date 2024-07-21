<h2><a href="https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1?page=1&difficulty=School,Basic&status=unsolved&sortBy=submissions">Union of two arrays</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given two arrays&nbsp;<strong>arr1[]</strong>&nbsp;and&nbsp;<strong>arr2[]</strong>,<strong>&nbsp;</strong>the&nbsp;task is to find the number of elements in the union between these two arrays.</span></p>
<blockquote>
<p><span style="font-size: 14pt;">The Union of the two arrays can be defined as the set containing distinct elements from both arrays. If there are repetitions, then only one element occurrence should be there in the union.</span></p>
</blockquote>
<p><span style="font-size: 14pt;"><em>Note:</em><strong>&nbsp;</strong>Elements are not necessarily distinct.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> arr1[] = [1, 2, 3, 4, 5], <span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;">arr2</span>[] = [1, 2, 3]
<strong>Output: </strong>5<strong>
Explanation: </strong>1, 2, 3, 4 and 5 are the elements which comes in the union setof both arrays. So count is 5.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr1[] =<strong> </strong>[85, 25, 1, 32, 54, 6], arr2[] = [85, 2] <br><strong>Output: </strong>7<strong>
Explanation: </strong>85, 25, 1, 32, 54, 6, and 2 are the elements which comes in the union set of both arrays. So count is 7.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr1[] =<strong> </strong>[1, 2, 1, 1, 2], arr2[] = [2, 2, 1, 2, 1] <br><strong>Output: </strong>2<strong>
Explanation: </strong>We need to consider only distinct. So count is 2.</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity</strong>: O(n+m)<br><strong>Expected Auxilliary Space</strong>: O(n+m)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong></span><br><span style="font-size: 14pt;">1 ≤ arr1.size,&nbsp;</span><span style="font-size: 14pt;">arr2</span><span style="font-size: 14pt;">.size ≤ 10</span><sup>5<br></sup><span style="font-size: 14pt;">0 ≤ arr1[i], arr2[i] &lt; 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Rockstand</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;