package main

import (
	"embed"
	"net/http"
)

//go:embed flag/*
var F embed.FS

func main() {
	mux := http.NewServeMux()

	mux.Handle("/", http.FileServer(http.FS(F)))
	http.ListenAndServe("127.0.0.1:8085", mux)
}
