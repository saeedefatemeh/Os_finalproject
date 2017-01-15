#include "types.h"
#include "user.h"
int main (void)
{
/*
int ChildPid = 0;
int j;
int o=0;
for(j=0 ; j<8 ; j++){
ChildPid = fork();
if(ChildPid ==0){
if(j%3 ==0){
nice();
o = j;
}
if(j%3 ==1){
nice();
nice();
o=j;
}
}
}
for(int i=0; i<9;i++)
	printf(1, "pid : %d , o : %d\n" , getpid(), o);
exit();

*/


printf(1, "pid1 : %d ,parent :%d \n" , getpid(),getppid());
nice();
fork();
printf(1, "pid2 : %d ,parent :%d \n" , getpid(),getppid());
nice();
fork();
printf(1, "pid3 : %d ,parent :%d \n" , getpid(),getppid());
nice();

for(int i=0; i<30;i++)
	printf(1, "pid1 : %d ,parent :%d \n" , getpid(),getppid());
exit();


}
