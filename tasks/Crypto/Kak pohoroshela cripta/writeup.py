"""
Шифр с пергаментом, обмотанным вокруг палки представляет собой скиталу.
Попробуем склеить обрывки во всех возможных комбинациях и попробуем все диаметры стержней.

Придется немного поискать глазами самый правдоподобный вариант.
"""
from itertools import permutations


KEYS = ["elzg30f_2xc02r3a15qp_vtfu0_p_b", "bq31uhk1litff3s5_a_soi19smejpo", "kt584g8sgxkze_xwr021e1grlhb0to"]

for i in (2, 3, 5):
    print(f"==== {i} ====")
    for a, b, c in permutations(KEYS, r=3):
        s = a + b + c
        print(s[0::i], s[1::i], s[2::i])
