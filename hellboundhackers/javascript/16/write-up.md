# write up

Quick overview of how I approached this.

I started by examining the source and extracting the check function into a separate .js file. With this file, I could quickly test values using Node js.

At first, I tried to simply brute force it with string permutations. This led to a huge search space and I threw this out because it would take too long.

I then went back to the drawing board and wrote out (in words) the things that the check function was doing so I could understand it better. I also experimented with various inputs and noticed that different character positions affected the output in different ways (e.g. characters near the beginning of the string had smaller impact on the sum than characters at the end). This makes sense given the nature of the checksum algorithm ($i^2$). I then manually tried various inputs and settled on a string length of 10 or 11. Moving over to the C++ solution, I then simply generated a bunch of random input strings of this length.

There are multiple correct/accepted answers.
