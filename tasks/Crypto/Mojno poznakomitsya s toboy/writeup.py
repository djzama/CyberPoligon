from hashlib import sha256

SALT, HASH = "city", "fd914a1562e86644afd261936e8e029f87b9203284943dda30e0634db57fa097"
for number in range(100_000, 1_000_000):
    string = (SALT + str(number)).encode()
    if sha256(string).hexdigest() == HASH:
        print(number)
