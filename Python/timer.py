from time import time

def timer(func):
    """
    Timer decorator that can be used to time any function
    ex: @timer
        def foo:
            return bar
    """

    def f(*args, **kwargs):
        before = time()
        rv = func(*args, **kwargs)
        after = time()
        print(f'{after - before:.10f} seconds elapsed to execute {func.__name__}')
        return rv
    return f

if __name__ == '__main__':
    @timer
    def count(a):
        for i in range(a):
            print(i)

    count(10)