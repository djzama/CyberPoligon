package checkadmin

import (
	"os"
)

func CheckAdmin() {
	_, err := os.Open("\\\\.\\PHYSICALDRIVE0")
	if err != nil {
		os.Exit(1)
	}
}
