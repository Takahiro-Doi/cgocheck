#include <stdio.h>
#include <main.h>

TEST_STRUCT_t testData;
int testIntData;

void
func_to_export(const char* message) {
  printf("MESSAGE: %s!!!\n", message);
}

TEST_STRUCT_t* getStructData(void){
    return &testData;
}

int* getIntData(void){
    testIntData = 1;
    return &testIntData;
}
