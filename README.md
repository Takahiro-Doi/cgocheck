# cgocheck

## memory check
```memory check
go build -gcflags -m

./cgocheck.go:17:13: testStruct escapes to heap
./cgocheck.go:18:13: testStruct2 escapes to heap
./cgocheck.go:15:20: new(_Ctype_struct_TEST_STRUCT) escapes to heap
./cgocheck.go:17:12: main ... argument does not escape
./cgocheck.go:18:12: main ... argument does not escape

```
## exec (address check)
```exec (address check)
2019/03/03 18:13:48 0x77d5d0 # get C pointer (C.function)
2019/03/03 18:13:48 0xc000086010 # New(C.Struct)
```
