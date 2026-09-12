<h2><a href="https://cses.fi/problemset/task/2413">Counting Towers</a></h2>

**Category:** Dynamic Programming  
**Language:** C++ (C++17)  
**Accepted submission:** [18694165](https://cses.fi/problemset/result/18694165/)

<ul class="task-constraints">
<li><b>Time limit:</b> 1.00 s</li>
<li><b>Memory limit:</b> 512 MB</li>
</ul>

<p>Your task is to build a tower whose width is <span class="math math-inline">2</span> and height is <span class="math math-inline">n</span>. You have an unlimited supply of blocks whose width and height are integers.</p>
<p>For example, here are some possible solutions for <span class="math math-inline">n=6</span>:
</p><center><img class="invertible" src="/file/a2fc04205fb57157bd28c9a6041601fc284681929941470fdfb15fcd4a14b4f2" width="300" height="" alt=""></center>
Given <span class="math math-inline">n</span>, how many different towers can you build? Mirrored and rotated towers are counted separately if they look different.<p></p>
<h1 id="input">Input</h1>
<p>The first input line contains an integer <span class="math math-inline">t</span>: the number of tests.</p>
<p>After this, there are <span class="math math-inline">t</span> lines, and each line contains an integer <span class="math math-inline">n</span>: the height of the tower.</p>
<h1 id="output">Output</h1>
<p>For each test, print the number of towers modulo <span class="math math-inline">10^9+7</span>.</p>
<h1 id="constraints">Constraints</h1>
<ul>
<li><span class="math math-inline">1 \le t \le 100</span></li>
<li><span class="math math-inline">1 \le n \le 10^6</span></li>
</ul>
<h1 id="example">Example</h1>
<p>Input:</p>
<pre>3
2
6
1337
</pre>
<p>Output:</p>
<pre>8
2864
640403945
</pre>
