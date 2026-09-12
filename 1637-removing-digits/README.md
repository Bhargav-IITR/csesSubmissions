<h2><a href="https://cses.fi/problemset/task/1637">Removing Digits</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18468119](https://cses.fi/problemset/result/18468119/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>You are given an integer <span class="math math-inline">n</span>. On each step, you may subtract one of the digits from the number.</p>
<p>How many steps are required to make the number equal to <span class="math math-inline">0</span>?</p>
<h1 id="input">Input</h1>
<p>The only input line has an integer <span class="math math-inline">n</span>.</p>
<h1 id="output">Output</h1>
<p>Print one integer: the minimum number of steps.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 10^6</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>27
</pre>
<p>Output:</p>
<pre>5
</pre>
<p>Explanation: An optimal solution is <span class="math math-inline">27 \rightarrow 20 \rightarrow 18 \rightarrow 10 \rightarrow 9 \rightarrow 0</span>.</p>

