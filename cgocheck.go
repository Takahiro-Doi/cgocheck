package main

/*
#include <stdlib.h>
#include <main.h>
*/
import "C"
import (
	"log"
)

func main() {
	testStruct := C.getStructData()

	testStruct2 := new(C.TEST_STRUCT_t)

	log.Printf("%p", testStruct)
	log.Printf("%p", testStruct2)
}
