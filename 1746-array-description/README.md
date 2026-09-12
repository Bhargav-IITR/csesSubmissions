<h2><a href="https://cses.fi/problemset/task/1746">Array Description</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18682003](https://cses.fi/problemset/result/18682003/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>You know that an array has <span class="math math-inline">n</span> integers between <span class="math math-inline">1</span> and  <span class="math math-inline">m</span>, and the absolute difference between two adjacent values is at most <span class="math math-inline">1</span>.</p>
<p>Given a description of the array where some values may be unknown, your task is to count the number of arrays that match the description.</p>
<h1 id="input">Input</h1>
<p>The first input line has two integers <span class="math math-inline">n</span> and <span class="math math-inline">m</span>: the array size and the upper bound for each value.</p>
<p>The next line has <span class="math math-inline">n</span> integers <span class="math math-inline">x_1,x_2,\dots,x_n</span>: the contents of the array. Value <span class="math math-inline">0</span> denotes an unknown value.</p>
<h1 id="output">Output</h1>
<p>Print one integer: the number of arrays modulo <span class="math math-inline">10^9+7</span>.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 10^5</span></li>
<li><span class="math math-inline">1 \le m \le 100</span></li>
<li><span class="math math-inline">0 \le x_i \le m</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>3 5
2 0 2
</pre>
<p>Output:</p>
<pre>3
</pre>
<p>Explanation: The arrays <span class="math math-inline">[2,1,2]</span>, <span class="math math-inline">[2,2,2]</span> and <span class="math math-inline">[2,3,2]</span> match the description.</p>

