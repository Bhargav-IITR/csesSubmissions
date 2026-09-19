<h2><a href="https://cses.fi/problemset/task/1076/">Sliding Window Median</a></h2>

**Category:** Sliding Window Problems  
**Language:** C++ (C++17)  
**Accepted submission:** [18796827](https://cses.fi/problemset/result/18796827/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>You are given an array of <span class="math math-inline">n</span> integers. Your task is to calculate the median of each window of <span class="math math-inline">k</span> elements, from left to right.</p>
<p>The median is the middle element when the elements are sorted. If the number of elements is even, there are two possible medians and we assume that the median is the smaller of them.</p>
<h1 id="input">Input</h1>
<p>The first line contains two integers <span class="math math-inline">n</span> and <span class="math math-inline">k</span>: the number of elements and the size of the window.</p>
<p>Then there are <span class="math math-inline">n</span> integers <span class="math math-inline">x_1,x_2,\ldots,x_n</span>: the contents of the array.</p>
<h1 id="output">Output</h1>
<p>Print <span class="math math-inline">n-k+1</span> values: the medians.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le k \le n \le 2 \cdot 10^5</span></li>
<li><span class="math math-inline">1 \le x_i \le 10^9</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>8 3
2 4 3 5 8 1 2 1
</pre>
<p>Output:</p>
<pre>3 4 5 5 2 1
</pre>
