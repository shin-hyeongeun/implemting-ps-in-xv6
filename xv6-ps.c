int 
cps()
{
	struct proc *p;
	sti();
	acquire(&ptable.lock);
	cprintf("name \t pid \t state \n");
	
	for(p=ptable.proc; p<&ptable.proc[NPROC]; p++){
		if(p->state==SLEEPING)
			cprintf("%s \t %d \t SLEEPING \n",p->name,p->pid);
		else if(p->state==RUNNING)
			cprintf("%s \t %d \t RUNNING \n",p->name,p->pid);
		else if(p->state==RUNNABLE)
			cprintf("%s \t %d \t RUNNABLE \n",p->name,p->pid);
	}
release(&ptable.lock);
return num(num->define num in syscall.h);
}