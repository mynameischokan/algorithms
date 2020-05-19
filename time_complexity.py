"""
Functions to analyze the time complexity
"""

# TODO
# Given a function below, how many times exec `print`.
# Analyze it's time complexity in terms of f(n). SO that f(n) = n^2
# And what is it's order?


def ex_1(n):
    for i in range(n):
        for j in range(i):
            print(j)


# TODO
# Given a function below, analyze it's time complexity in terms of f(p). So that f(p) = √n
# And what is it's order?

# int `i` is always incrementing
# At every loop step int `i` is added to int `p`
def ex_2(n, p=0, i=1):
    while p <= n:
        p = p + i
        i += 1
    return p


# TODO
# Given a function below, analyze it's time complexity in terms of f(k). So that f(k) = log2n
# And what is it's order?


def ex_3(n):
    i = 1
    while i < n:
        i *= 2
    return i

# TODO
# Analyze above function with `n=10`
# So that you'll get `seal` num of executione


# TODO
# Given a function below, analyze it's time complexity in terms of f(k). So that f(k) = n
# And what is it's order?


def ex_4(n):
    i = 1
    while i < n:
        i += 1
    return i


# TODO
# Given a function below, analyze it's time complexity in terms of f(k). So that f(k) = log2n
# And what is it's order?

def ex_5(n):
    i = n
    while i >= 1:
        i /= 2
    return i


# TODO
# Given a function below, analyze it's time complexity in terms of f(n). So that f(n) = √n
# And what is it's order?

def ex_6(n):
    i = 0
    while i * i < n:
        i += 1
        print('Hi')  # statement to be executed <= have to count this
    return i


if __name__ == '__main__':
    pass
