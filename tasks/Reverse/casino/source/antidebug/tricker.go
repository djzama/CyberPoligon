package antidebug

import (
	"syscall"
	"time"
)

func Tricker() {
	ticker := time.NewTicker(1 * time.Second)
	quit := make(chan struct{})
	go func() {
		for {
			syscall.NewLazyDLL("kernel32.dll").NewProc("IsDebuggerPresent")
			select {
			case <-ticker.C:
				HeartbeatCheckingTest()
			case <-quit:
				ticker.Stop()
				return
			}
		}
	}()
}
