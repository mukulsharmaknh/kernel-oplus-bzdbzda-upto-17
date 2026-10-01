#include <linux/types.h>
#include <linux/kernel.h>
bool ksu_selinux_hide_status_get(void) { return false; }
void ksu_selinux_hide_status_set(bool enable) { }
int ksu_selinux_hide_init(void) { return 0; }
void ksu_selinux_hide_exit(void) { }
bool ksu_selinux_hide_enable(void) { return true; }
