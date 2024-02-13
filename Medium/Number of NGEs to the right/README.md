<h2><a href="https://www.geeksforgeeks.org/problems/number-of-nges-to-the-right/1?page=3&difficulty=School,Basic,Easy&status=unsolved&sortBy=latest">Number of NGEs to the right</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array of <strong>N</strong> integers and <strong>Q</strong> queries of indices, print the number of next greater elements(NGEs)&nbsp;to the right of the given index element.&nbsp;<br><strong>Example:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong> arr     = [3, 4, 2, 7, 5, 8, 10, 6</span><span style="font-size: 18px;">]
        queries = 2
&nbsp;       indices = [0, 5]
<strong>Output: </strong> 6, 1
<strong>Explanation: </strong> 
The next greater elements to the right of 3(index 0)
are 4,7,5,8,10,6.&nbsp; 
The next greater elements to the right of 8(index 5)
is only 10.
</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function <strong>count_NGEs()</strong>&nbsp;which takes <strong>N</strong>, <strong>arr, queries&nbsp;</strong>and <strong>indices</strong>&nbsp;as the input parameter and returns a list NGEs[] where NGEs[i] stores the count of elements strictly greater than the current element (arr[indices[i]]) to the right of indices[i].</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N * queries).<br><strong>Expected Auxiliary Space:</strong> O(queries).</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>4</sup></span><br><span style="font-size: 18px;">1 &lt;= arr[i] &lt;= 10</span><sup>5</sup><br><span style="font-size: 18px;">1 &lt;= queries &lt;= 100</span></p>
<p><span style="font-size: 18px;">0 &lt;= indices[i] &lt;= N - 1</span></p>
<p>&nbsp;</p></div>