/* test */
typedef struct TEST_STRUCT {
    int data1;
	long data2;
} TEST_STRUCT_t; 

extern void func_to_export(const char*);
extern int* getIntData(void);
extern TEST_STRUCT_t* getStructData(void);
