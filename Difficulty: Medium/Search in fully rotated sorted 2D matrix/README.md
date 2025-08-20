<h2><a href="https://www.geeksforgeeks.org/problems/search-in-fully-rotated-sorted-2d-matrix/1">Search in fully rotated sorted 2D matrix</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p class="MsoNormal"><span style="font-size: 14pt;">You are given a 2D matrix <strong>mat[][] </strong>of size n x m that was initially filled in the following manner:</span></p>
<p><span style="font-size: 14pt;"> </span></p>
<ul style="margin-top: 0cm;" type="disc">
<li class="MsoNormal" style="mso-list: l0 level1 lfo1; tab-stops: list 36.0pt;"><span style="font-size: 14pt;">Each row is sorted in increasing order from left to right.</span></li>
<li class="MsoNormal" style="mso-list: l0 level1 lfo1; tab-stops: list 36.0pt;"><span style="font-size: 14pt;">The first element of every row is greater than the last element of the previous row.</span></li>
</ul>
<p><span style="font-size: 14pt;"> </span></p>
<p class="MsoNormal"><span style="font-size: 14pt;">This implies that if the matrix is flattened row-wise, it forms a strictly sorted 1D array.<br>Later, this sorted 1D array was rotated at some unknown pivot. The rotated array was then written back into the matrix row-wise to form the current matrix.</span></p>
<p><span style="font-size: 14pt;"> </span></p>
<p class="MsoNormal"><span style="font-size: 14pt;">Given such a matrix <strong>mat[][]</strong> and an integer <strong>x</strong>, determine whether x exists in the matrix.</span></p>
<p><span style="font-size: 14pt;"> </span></p>
<p class="MsoNormal"><span style="font-size: 14pt;"><strong><span style="mso-ansi-language: EN-IN;">Examples:<br></span></strong></span></p>
<pre class="MsoNormal"><span style="font-size: 14pt;"><span style="mso-ansi-language: EN-IN;"><strong style="font-size: 14pt;">Input: </strong><span style="font-size: 14pt;">x = 3,</span><strong style="font-size: 14pt;"><br></strong><span style="font-size: 14pt;">mat[][] = </span><span style="font-size: 18.6667px;">[[7, 8, 9, 10],           
          [11, 12, 13, 1],
          [2, 3, 4, 5]] </span><strong style="font-size: 14pt;"><br>Output: </strong><span style="font-size: 14pt;">true</span><strong style="font-size: 14pt;"><br>Explanation: </strong></span></span><span style="font-size: 18.6667px;">3 is located at the 3rd row and 2nd column.</span></pre>
<pre><span style="font-size: 14pt;"><span style="mso-ansi-language: EN-IN;"><strong style="font-size: 14pt;">Input:</strong><span style="font-size: 14pt;"> x = 10,</span><strong style="font-size: 14pt;"><br></strong><span style="font-size: 18.6667px;">mat[][] <strong>= </strong>[[6, 7, 8],                         
          [9, 1, 2],
          [3, 4, 5]]</span><strong style="font-size: 14pt;"><br>Output: </strong><span style="font-size: 14pt;">false</span><strong style="font-size: 14pt;"><br>Explanation: </strong></span></span><span style="font-size: 18.6667px;">The value 10 does not exist in the matrix.</span></pre>
<p><strong><span style="font-size: 18.6667px;">Constraint:<br></span></strong><span style="font-size: 18.6667px;">1 ≤ n × m ≤ 10<sup>5</sup><br></span><span style="font-size: 18.6667px;">1 ≤ mat[i][j], x ≤ 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search</code>&nbsp;<code>Matrix</code>&nbsp;<code>Algorithms</code>&nbsp;