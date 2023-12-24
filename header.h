#include <iostream>
#include <sched.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/wait.h>
#include <cstdlib>
#include <sys/mount.h>
#define CGROUP_MEM "/sys/fs/cgroup/cntr/memory.max"
#define CGROUP_CPU "/sys/fs/cgroup/cntr/cpu.max"
#define CGROUP_SUBTREE "/sys/fs/cgroup/cgroup.subtree_control"
#define REQ_CGROUP "/sys/fs/cgroup/cntr"
#define concat(a,b) (a"" b)
