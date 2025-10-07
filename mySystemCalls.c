#include "proj3KernelTemplate.h"

static DEFINE_MUTEX(enqueue_mutex);
static DEFINE_MUTEX(dequeue_mutex);

proj_app_ctx_t* application = NULL;

SYSCALL_DEFINE0(init_kern_application) {
  return -1;
}

SYSCALL_DEFINE0(free_kern_application) {
  return -1;
}

SYSCALL_DEFINE1(kern_add_priority, void __user*, node) {
  return -1;
}

SYSCALL_DEFINE1(kern_get_priority, void __user*, dest) {
  return -1;
}
