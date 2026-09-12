<h2><a href="https://cses.fi/problemset/task/1642">Sum of Four Values</a></h2>

**Category:** Sorting and Searching  
**Language:** C++ (C++17)  
**Accepted submission:** [10271121](https://cses.fi/problemset/result/10271121/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>You are given an array of <span class="math math-inline">n</span> integers, and your task is to find four values (at distinct positions) whose sum is <span class="math math-inline">x</span>.</p>
<h1 id="input">Input</h1>
<p>The first input line has two integers <span class="math math-inline">n</span> and <span class="math math-inline">x</span>: the array size and the target sum.</p>
<p>The second line has <span class="math math-inline">n</span> integers <span class="math math-inline">a_1,a_2,\dots,a_n</span>: the array values.</p>
<h1 id="output">Output</h1>
<p>Print four integers: the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print <code>IMPOSSIBLE</code>.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 1000</span></li>
<li><span class="math math-inline">1 \le x,a_i \le 10^9</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>8 15
3 2 5 8 1 3 2 3
</pre>
<p>Output:</p>
<pre>2 4 6 7
</pre>
