#include <linux/kernel.h>
#include <linux/module.h>

static int module_int = 100;
static char *module_string = "Linux Kernel Module";

module_param(module_int, int, S_IRUGO);
module_param(module_string, charp, S_IRUGO);

int init_module(void){
	printk("My Linux Kernel Module \n");
	printk("module_int = %d \n", module_int);
	printk("module_string = %s \n", module_string);
	return 0;
}

void cleanup_module(void){
	printk("My Linux Kernel Module was removed!");
}
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Drelang");