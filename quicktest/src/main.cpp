#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

using namespace std;

int main(int argc,char* argv[])
{
	int N;
	N=argv[1];
	int pid,status;
	pid_t pid;
	pid = fork();
	if(pid == 0)
	{
	for(int i=1;i<N;i++)
	{
		if(i/2 != 0)
		{
			cout<<i<<endl;
		}
		exit(0);
	}
	}
	else
	{

		for(i=1;i<N;i++)
		{
			if(i/2 == 0)
			{
				cout<<i<<endl;
			}
	
		}
		
		if((pid = waitpid(pid,&status, WIFEXITED)
		{
		       perror("wait() error");
			cout<<"child is still running"<<endl;
		}
		else
			cout<<"abnormal child termination";


	}



