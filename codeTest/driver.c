/* the driver dev*/
/*a string is a null-terminated array*/


#include<linux/init.h>
#include<module.h>


MODULE_LICENCE("Dual BSD/GPL");
MODULE_AUTHOR("magoi maxwel");

/*
 *strcpy(s1, s2)  ---> copies string s2 to s1
 *strcat(s1, s2)   --->concatenates s2 to s1
 *strlen(s1)   ---> return the lenght of the string S1
 *strcmp(s1, s2)  ---> returns 0 if s1 and s2 are the same
 *strchr(s1, ch)  ---> return a pointer to the first apperancce of ch
 * strstr(s1, s2)  ---> return a pointer to the first occurance of the string S2 in s1
 * */


int start_init(){
	char info[] = "module loaded"; /* char info[] = {"m", "o", "d", "u", "l", "e", "\0"}*/
	printk(KERN_INFO "%s\n", info);
	return 0;

}

void end_exit(){
	printk(KERN_INFO "unloaded the module");
}


module_init(start_init);
module_exit(end_exit;)
