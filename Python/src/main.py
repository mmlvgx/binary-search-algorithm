from math import floor


def find(_list__: list[str], target: str, start: int, end: int) -> None:

    if start > end:
        # Not Found
        return None

    middle = floor((start + end) / 2)

    if _list__[middle] == target:
        # Found at middle of the list
        return middle

    # Recursion
    elif _list__[middle] > target:
        # Search left
        return find(_list__, target, start, end - 1)
    else:
        # Search right
        return find(_list__, target, start + 1, end)

# Example
list__ = ['a', 'b', 'c', 'x', 'y', 'z']

element = find(list__, 'c', 0, 6)

print(f'Result: {element}')
# >>> 2