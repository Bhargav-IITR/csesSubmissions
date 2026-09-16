<h2><a href="https://cses.fi/problemset/task/1140/">Projects</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18765502](https://cses.fi/problemset/result/18765502/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>There are <span class="math math-inline">n</span> projects you can attend. For each project, you know its starting and ending days and the amount of money you would get as reward. You can only attend one project during a day.</p>
<p>What is the maximum amount of money you can earn?</p>
<h1 id="input">Input</h1>
<p>The first input line contains an integer <span class="math math-inline">n</span>: the number of projects.</p>
<p>After this, there are <span class="math math-inline">n</span> lines. Each such line has three integers <span class="math math-inline">a_i</span>, <span class="math math-inline">b_i</span>, and <span class="math math-inline">p_i</span>: the starting day, the ending day, and the reward.</p>
<h1 id="output">Output</h1>
<p>Print one integer: the maximum amount of money you can earn.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le n \le 2 \cdot 10^5</span></li>
<li><span class="math math-inline">1 \le a_i \le b_i \le 10^9</span></li>
<li><span class="math math-inline">1 \le p_i \le 10^9</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>4
2 4 4
3 6 6
6 8 2
5 7 3
</pre>
<p>Output:</p>
<pre>7
</pre>
