# digit-parser

This is a small program that parses the digits of an integer number.

## What's the point?

One day, I was writing some python code, and for some reason I found myself
needing to loop through the digits of an integer. I don't remember why exactly
I needed to do this, but I did.

One other reason I'm doing this is because it could be a great learning
experience for me about packaging code and compile C code into a library. I'm
not too familiar with compiling C libraries.

## How does it work?

The idea was to create a function that would
take in an integer number, parse it, and return an array containing each digit.
Then, one day while I was walking home from school, something came to me. I
wrote a representation of the algorithm in python since the syntax is simple
and won't get in the way of the demonstration.

```python
nums = []

number = 45
temp = number / 10
nodec = floor(temp)
dec = temp - nodec
nums.append(dec * 10)
```

In order to get the first digit, it's pretty simple:

1. Divide the number by 10 so that the first digit is the first decomal place
2. Take the floor of that number to eliminate the decimal portion.
3. Subtract the floored number from the original to isolate the decimal portion
4. Multiply the decimal portion by 10

Now you have the digit in the 1's place! Here's an example with the number 835:

```
1. 835 / 10    -> 83.5
2. floor(83.5) -> 83
3. 83.5 - 83   -> 0.5
4. 0.5 * 10    -> 5
```

## Other info

This project isn't super high on my priority list right now so don't expect too
much work on it. Who am I kidding, who's even going to see this anyway? Anyway,
we'll see what happens. Anyway, I don't care what you do with the code. If you
want more info about legal stuff, check out the license.
