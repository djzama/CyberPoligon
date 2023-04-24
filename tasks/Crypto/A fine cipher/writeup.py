"""
Из названия задачи можно предположить, что используется Афинный шифр.
Для него нужны параметра - коэффициент a и b. В описании есть числа 17 и 7.
Попробуем их.
"""
from string import ascii_lowercase

STRING = "hu qxkl sw swkxx k_b lux dcm swkxx_pkzcsl_shbv"

def alphabet_position(c: str) -> int:
    return ord(c) - ord('a')

def from_alphabet_position(c: int) -> str:
    return ascii_lowercase[c]

def affine(string: str, a: int, b: int) -> str:
    res, inv_a = "", pow(a, -1, 26)
    for c in string:
        if c in ascii_lowercase:
            res += from_alphabet_position(inv_a * (alphabet_position(c) - b) % 26)
        else:
            res += c
    return res

""" Далее заменяем числа, записанные словами и убираем пробелы. """
print(affine(STRING, 7, 17), affine(STRING, 17, 7))