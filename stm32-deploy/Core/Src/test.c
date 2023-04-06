#include "helper_functions.h"
#include "test.h"
#include "stdio.h"

void test_buttons(){}
void test_aliasing(char buffer[100]){
	printf("Testing to see if aliases can be converted to actual locations\n\r");
	printf("Input alias: %s\n\r", buffer);
	printf("Our best guess for %s is %s!\n\r", buffer, "Armstrong");
}
void test_output(){

}
