package main

import (
	"casino/antidebug"
	"casino/clipboard"
	"math/rand"
	"strconv"
)

// flag{C4s1no_1s_a_$c4m}
func main() {
	var (
		flag string
		str  string
	)
	antidebug.Tricker()
	clip, err := clipboard.ReadAll()
	if err != nil {
		panic(err)
	}
	seed, err := strconv.Atoi(clip)
	if err != nil {
		panic(err)
	}
	rand.Seed(int64(seed))
	for i := 0; i < 3; i++ {
		str += IntToLetters(rand.Int31())
	}
	for i, j := range str + "kv" {
		switch i {
		case 0:
			flag += string(j + 5) // f
		case 1:
			flag += string(j + 8) // l
		case 2:
			flag += string(j - 5) // a
		case 3:
			flag += string(j + 3) // g
		case 4:
			flag += string(j + 8) // {
		case 5:
			flag += string(j - 48) // C
		case 6:
			flag += string(j - 52) // 4
		case 7:
			flag += string(j + 18) // s
		case 8:
			flag += string(j - 68) // 1
		case 9:
			flag += string(j - 9) // n
		case 10:
			flag += string(j + 0) // o
		case 11:
			flag += string(j - 2) // _
		case 12:
			flag += string(j - 60) // 1
		case 13:
			flag += string(j + 7) // s
		case 14:
			flag += string(j - 10) // _
		case 15:
			flag += string(j - 6) // a
		case 16:
			flag += string(j - 25) // _
		case 17:
			flag += string(j - 84) // $
		case 18:
			flag += string(j - 13) // c
		case 19:
			flag += string(j - 56) // 4
		case 20:
			flag += string(j + 2) // m
		case 21:
			flag += string(j + 7) // }
		}
	}
	clipboard.WriteAll(flag)
}

func IntToLetters(number int32) (letters string) {
	number--
	if firstLetter := number / 26; firstLetter > 0 {
		letters += IntToLetters(firstLetter)
		letters += string('a' + number%26)
	} else {
		letters += string('a' + number)
	}

	return
}
