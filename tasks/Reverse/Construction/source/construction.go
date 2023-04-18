package main

import (
	"fmt"
	"math/rand"
	"strings"
)

func main() {
	fmt.Println(hehe())
}

// synt{Jung_1gf_y1xr_gb_o3_n_oh1yq3e}
func hehe() string {
	ch := [65]rune{'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h',
		'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q',
		'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z',
		'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '{', '}', '_'}
	var (
		b                                       strings.Builder
		b1, b2, b3, b4, b5, b6, b7, b8, b9, b10 = false, false, false, false, false, false, false, false, false, false
		c                                       = 37
		a                                       = ""
	)

	for i := 0; i < 5; i++ {
		if i == 1 {
			c = 49 //y
		} else if i == 2 {
			c = 27 //n
		} else if i == 3 {
			c = 39 //t
		} else if i == 4 {
			c = 62 //{
		}
		b.WriteRune(ch[c])
	}

	if ch[rand.Intn(len(ch))] == 18 {
		haha(18, ch, &b1, &b, "u")
	}
	if ch[rand.Intn(len(ch))] == 27 {
		haha(27, ch, &b2, &b, "g")
	}
	if ch[rand.Intn(len(ch))] == 64 {
		haha(64, ch, &b3, &b, "1")
	}
	if ch[rand.Intn(len(ch))] == 13 {
		haha(13, ch, &b4, &b, "f")
	}
	if ch[rand.Intn(len(ch))] == 64 {
		haha(64, ch, &b5, &b, "y")
	}
	if ch[rand.Intn(len(ch))] == 52 {
		haha(52, ch, &b6, &b, "x")
	}
	if ch[rand.Intn(len(ch))] == 35 {
		haha(35, ch, &b7, &b, "_")
	}
	if ch[rand.Intn(len(ch))] == 13 {
		haha(13, ch, &b8, &b, "b")
	}
	if ch[rand.Intn(len(ch))] == 64 {
		haha(64, ch, &b9, &b, "o")
	}
	if ch[rand.Intn(len(ch))] == 54 {
		haha(54, ch, &b10, &b, "_")
	}

	for i := 0; i < 1; i++ {
		b.WriteString("n_oh1yq3e}")
	}

	if b1 && b2 && b3 && b4 && b5 && b6 && b7 && b8 && b9 && b10 {
		return "nearly correct flag: " + b.String()
	}
	for i := 0; i < 35; i++ {
		a += string(ch[rand.Intn(len(ch))])
	}
	return "wrong flag: " + a
}

func haha(c int, ch [65]rune, bn *bool, b *strings.Builder, s string) {
	*bn = true
	b.WriteRune(ch[c])
	b.WriteString(s)
}
