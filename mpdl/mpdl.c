#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>
 
static int __init mpdl_init(void)
{
    printk(KERN_INFO "Ola: mpdl_init");
    return 0;
}
 
static void __exit mpdl_fini(void)
{
    printk(KERN_INFO "Tchau: mpdl_fini");
}
 
module_init(mpdl_init);
module_exit(mpdl_fini);
 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Fernando Ginez da Silva <fginez@gmail.com>");
MODULE_DESCRIPTION("Meu primeiro driver linux");
