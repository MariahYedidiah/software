/* Name:-2.c
 * Author :-Susmita Roy
 * 2. Write a simple program to execute in an infinite loop at the background. Go to /proc directory and
identify all the process related information in the corresponding proc directory.
*/
#include<stdio.h>
int main()
{while(1);
	return 0;
}
/*
 output

 total 0
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 0 -> /dev/pts/4
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 1 -> /dev/pts/4
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 2 -> /dev/pts/4
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 3 -> /home/susmita-roy/Trial/inf1
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 4 -> /home/susmita-roy/Trial/inf2.c
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 5 -> /home/susmita-roy/Trial/inf3.c
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 6 -> /home/susmita-roy/Trial/inf4.c
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 7 -> /home/susmita-roy/Trial/inf5.c
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ vi 5.c
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ ls
 10a.c   17_1.c            23.c     30.c              creatFile.c     inf4.c         Psalm1.txt
 10b     17_2.c            24.c     3.c               dbfile          inf5.c         :q
 11a.c   18.c              25.c     4.c               Emmanuel        InfLoop.c      ReadWrite.c
 11b.c   18_initialize.c   26.c     5.c               Grace           Isaiah54       record.txt
 11.c    19.c              27_a.c   6.c               GraceAndTruth   Jesus          SoftLink.c
 12.c    20a.c             27_b.c   7.c               Grace_myfifo    JesusIsGod     Yeshua
 13.c    20b.c             27_c.c   8.c               HardLink.c      JesusIsLord
 14.c    21_b.c            27_d.c   9.c               HelloWorld.c   'ls file'
 15.c    21.c              27_e.c  'Amazing grace'    inf1            Messiah
 16a.c   22.c              28.c    'Amazing grace2'   inf2.c          Mknod_test.c
 16b.c   22_output.txt     29.c     a.out             inf3.c          pipe1
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ vi InfLoop.c
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ cc 2.c
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ vi 2.c
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ cc 2.c
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ ./a.out
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ vi 2.c
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ cc 2.c
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ ./a.out
^C
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ ./a.out &
[4] 81280
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ ls -l /proc/81280
total 0
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 arch_status
dr-xr-xr-x  2 susmita-roy susmita-roy 0 Aug 31 17:32 attr
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 autogroup
-r--------  1 susmita-roy susmita-roy 0 Aug 31 17:32 auxv
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 cgroup
--w-------  1 susmita-roy susmita-roy 0 Aug 31 17:32 clear_refs
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 cmdline
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 comm
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 coredump_filter
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 cpu_resctrl_groups
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 cpuset
lrwxrwxrwx  1 susmita-roy susmita-roy 0 Aug 31 17:32 cwd -> /home/susmita-roy/Trial
-r--------  1 susmita-roy susmita-roy 0 Aug 31 17:32 environ
lrwxrwxrwx  1 susmita-roy susmita-roy 0 Aug 31 17:32 exe -> /home/susmita-roy/Trial/a.out
dr-x------  2 susmita-roy susmita-roy 3 Aug 31 17:32 fd
dr-xr-xr-x  2 susmita-roy susmita-roy 0 Aug 31 17:32 fdinfo
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 gid_map
-r--------  1 susmita-roy susmita-roy 0 Aug 31 17:32 io
-r--------  1 susmita-roy susmita-roy 0 Aug 31 17:32 ksm_merging_pages
-r--------  1 susmita-roy susmita-roy 0 Aug 31 17:32 ksm_stat
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 limits
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 loginuid
dr-x------  2 susmita-roy susmita-roy 0 Aug 31 17:32 map_files
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 maps
-rw-------  1 susmita-roy susmita-roy 0 Aug 31 17:32 mem
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 mountinfo
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 mounts
-r--------  1 susmita-roy susmita-roy 0 Aug 31 17:32 mountstats
dr-xr-xr-x 59 susmita-roy susmita-roy 0 Aug 31 17:32 net
dr-x--x--x  2 susmita-roy susmita-roy 0 Aug 31 17:32 ns
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 numa_maps
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 oom_adj
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 oom_score
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 oom_score_adj
-r--------  1 susmita-roy susmita-roy 0 Aug 31 17:32 pagemap
-r--------  1 susmita-roy susmita-roy 0 Aug 31 17:32 patch_state
-r--------  1 susmita-roy susmita-roy 0 Aug 31 17:32 personality
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 projid_map
lrwxrwxrwx  1 susmita-roy susmita-roy 0 Aug 31 17:32 root -> /
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 sched
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 schedstat
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 sessionid
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 setgroups
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 smaps
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 smaps_rollup
-r--------  1 susmita-roy susmita-roy 0 Aug 31 17:32 stack
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 stat
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 statm
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 status
-r--------  1 susmita-roy susmita-roy 0 Aug 31 17:32 syscall
dr-xr-xr-x  3 susmita-roy susmita-roy 0 Aug 31 17:32 task
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 timens_offsets
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 timers
-rw-rw-rw-  1 susmita-roy susmita-roy 0 Aug 31 17:32 timerslack_ns
-rw-r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 uid_map
-r--r--r--  1 susmita-roy susmita-roy 0 Aug 31 17:32 wchan
*/
